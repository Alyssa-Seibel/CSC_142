#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>

constexpr std::size_t SMALL_BUCKET_SIZE = 4096;
constexpr std::size_t LARGE_BUCKET_SIZE = 1024 * 1024; // 1MB


class Bucket {
public:
    virtual ~Bucket() = default;
    virtual void* allocate(std::size_t size) = 0;
};


class SmallBucket : public Bucket {
private:
    std::vector<uint8_t> data;
    std::size_t offset = 0;

public:
    SmallBucket() : data(SMALL_BUCKET_SIZE) {}

    void* allocate(std::size_t size) override {
        if (offset + size > data.size()) {
            throw std::bad_alloc();
        }
        void* ptr = data.data() + offset;
        offset += size;
        return ptr;
    }
};


class LargeBucket : public Bucket {
private:
    std::unique_ptr<uint8_t[]> data;
    std::size_t size;

public:
    LargeBucket(std::size_t requested_size) {
        if (requested_size > LARGE_BUCKET_SIZE) {
            throw std::bad_alloc();
        }
        data = std::make_unique<uint8_t[]>(requested_size);
        size = requested_size;
    }

    void* allocate(std::size_t size) override {
        if (size > size) {
            throw std::bad_alloc();
        }
        return data.get(); 
    }
};

// Heap class
class Heap {
private:
    std::vector<std::unique_ptr<Bucket>> buckets;

public:
    void* allocate(std::size_t size) {
        try {
            if (size > SMALL_BUCKET_SIZE) {
                auto bucket = std::make_unique<LargeBucket>(size);
                void* ptr = bucket->allocate(size);
                buckets.push_back(std::move(bucket));
                return ptr;
            } else {
                if (buckets.empty() || dynamic_cast<SmallBucket*>(buckets.back().get()) == nullptr) {
                    buckets.push_back(std::make_unique<SmallBucket>());
                }

                return buckets.back()->allocate(size);
            }
        } catch (const std::bad_alloc&) {
            throw; 
        }
    }
};
int main() {
    try {
        Heap heap;

        void* smallAlloc = heap.allocate(1024);
        std::cout << "Allocated small chunk at " << smallAlloc << "\n";

        void* largeAlloc = heap.allocate(900000);
        std::cout << "Allocated large chunk at " << largeAlloc << "\n";

       
    } catch (const std::bad_alloc& e) {
        std::cerr << "Allocation failed: " << e.what() << '\n';
    }

    return 0;
}
