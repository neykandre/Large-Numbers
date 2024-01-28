#include <iostream>

#include "LargeNumbers.h"

using namespace LargeNumbers::literals;

int main() {
    long double a1 = -12123.115;
    long double b1 = 1.123123123;
    LargeNumbers::LargeNumber a = LargeNumbers::literals::operator ""_LN(a1);
    LargeNumbers::LargeNumber b = LargeNumbers::literals::operator ""_LN(b1);
    LargeNumbers::LargeNumber res = a * b;
    std::cout << res << std::endl;
    std::cout << a1 * b1 << std::endl;
}
