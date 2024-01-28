#include <iostream>
#include <string>
#include "LargeNumbers.h"

using namespace LargeNumbers::literals;

int main() {
    LargeNumbers::LargeNumber a = "-01300.11523000"_LN;
    LargeNumbers::LargeNumber b = "-0"_LN;
    long double a1 = -1300.11523;
    long double b1 = -0;
    std::cout << a - b << std::endl;
    std::cout << a1 - b1 << std::endl;
}
