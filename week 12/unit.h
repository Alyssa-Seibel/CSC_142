/*
8-1.h
- In this file 
- 4/2/25
- Alyssa Seibel
*/

#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <iterator>

class FibonacciIterator {
public:
    explicit FibonacciIterator(int index);
    bool operator!=(const FibonacciIterator& other) const;
    FibonacciIterator& operator++();
    int operator*() const;

private:
    int current;
    int next;
    int index;
};

class FibonacciRange {
public:
    explicit FibonacciRange(int max);
    FibonacciIterator begin() const;
    FibonacciIterator end() const;

private:
    int max;
};

#endif // FIBONACCI_H
