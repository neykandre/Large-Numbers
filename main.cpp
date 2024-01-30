#include <iostream>

#include "LargeNumbers.h"

using namespace LargeNumbers::literals;

int main() {
    long double a1 = 012.34567;
    long double b1 = -140.077;
    LargeNumbers::LargeNumber a = operator ""_LN(a1);
    LargeNumbers::LargeNumber b = operator ""_LN(b1);
    std::cout << a1 * b1 << std::endl;
    std::cout << a * b << std::endl;
}