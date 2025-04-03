#include <iostream>
#include "primenumrange.h"

int main() {
    int max;
    std::cout << "Enter the maximum number: ";
    std::cin >> max;

    PrimeNumberRange primeRange(max);

    std::cout << "Prime numbers less than " << max << ": ";
    for (int prime : primeRange) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    return 0;
}
