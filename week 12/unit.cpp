#include "unit.h"

FibonacciIterator::FibonacciIterator(int index) : current(0), next(1), index(index) {}

bool FibonacciIterator::operator!=(const FibonacciIterator& other) const {
    return index != other.index;
}

FibonacciIterator& FibonacciIterator::operator++() {
    int temp = next;
    next = current + next;
    current = temp;
    ++index;
    return *this;
}

int FibonacciIterator::operator*() const {
    return current;
}

FibonacciRange::FibonacciRange(int max) : max(max) {}

FibonacciIterator FibonacciRange::begin() const {
    return FibonacciIterator(0);
}

FibonacciIterator FibonacciRange::end() const {
    return FibonacciIterator(max);
}
