#include <iostream>

#include "LargeNumbers.h"

using namespace LargeNumbers::literals;

int main() {
    LargeNumbers::LargeNumber a = 2_LN;
    LargeNumbers::LargeNumber b = 2_LN;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;
    std::cout << (a >= b) << std::endl;
    std::cout << (a <= b) << std::endl;
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
}