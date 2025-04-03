#include "primenumrange.h"
#include <cmath>

PrimeNumberRange::PrimeNumberRange(int max) {
    generatePrimes(max);
}

void PrimeNumberRange::generatePrimes(int max) {
    if (max < 2) return;

    std::vector<bool> isPrime(max, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= std::sqrt(max); ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < max; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < max; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

std::vector<int>::iterator PrimeNumberRange::begin() {
    return primes.begin();
}

std::vector<int>::iterator PrimeNumberRange::end() {
    return primes.end();
}
