#include <iostream>

#include "LargeNumbers.h"

using namespace LargeNumbers::literals;

int main() {
    LargeNumbers::LargeNumber a = 998244353.998244353_LN;
    LargeNumbers::LargeNumber b = 0.00006789012340000_LN;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << (a > b) << std::endl;
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