#include <iostream>
#include <string>
#include "LargeNumbers.h"

using namespace LargeNumbers::literals;

int main() {
    LargeNumbers::LargeNumber a = "001300.011235000"_LN;
    LargeNumbers::LargeNumber b = a;
    std::cout << (-a > b) << std::endl;
}
