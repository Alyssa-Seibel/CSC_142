#include <iostream>
#include "unit.h"

int main() {
    FibonacciRange range(10);
    for (int num : range) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
