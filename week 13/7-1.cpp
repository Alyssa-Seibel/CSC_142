


#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
#include <algorithm>
#include <cstdint>

class UnsignedBigInteger {
private:
    std::vector<uint8_t> digits; 

public:
 
    UnsignedBigInteger() = default;

    UnsignedBigInteger(unsigned int value) {
        while (value > 0) {
            digits.push_back(value % 10);
            value /= 10;
        }
    }

  
    void print() const {
        if (digits.empty()) {
            std::cout << "0";
            return;
        }
        for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
            std::cout << (int)*it;
        }
    }

   
    UnsignedBigInteger operator+(const UnsignedBigInteger& other) const {
        UnsignedBigInteger result;
        size_t maxSize = std::max(digits.size(), other.digits.size());
        uint8_t carry = 0;

        for (size_t i = 0; i < maxSize || carry; ++i) {
            uint8_t a = (i < digits.size()) ? digits[i] : 0;
            uint8_t b = (i < other.digits.size()) ? other.digits[i] : 0;
            uint8_t sum = a + b + carry;
            result.digits.push_back(sum % 10);
            carry = sum / 10;
        }

        return result;
    }


    operator int() const {
        if (digits.size() > 10) {
            throw std::overflow_error("Narrowing conversion would occur");
        }

        int result = 0;
        int power = 1;

        for (uint8_t digit : digits) {
            if ((INT_MAX - digit * power) < result) {
                throw std::overflow_error("Narrowing conversion would occur");
            }
            result += digit * power;
            power *= 10;
        }

        return result;
    }


};
int main() {
    UnsignedBigInteger big1(12345);
    UnsignedBigInteger big2(98765);

    UnsignedBigInteger result = big1 + big2;
    result.print(); 
    std::cout << std::endl;

    int narrowed = static_cast<int>(big1);
    std::cout << "Converted to int: " << narrowed << std::endl;

    return 0;
}
