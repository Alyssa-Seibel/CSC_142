#ifndef PRIMENUMBER_RANGE_H
#define PRIMENUMBER_RANGE_H

#include <vector>

class PrimeNumberRange {
public:
    explicit PrimeNumberRange(int max);  
    std::vector<int>::iterator begin();  
    std::vector<int>::iterator end();    

private:
    std::vector<int> primes;  
    void generatePrimes(int max);  
};

#endif 
