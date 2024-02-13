#include "LargeNumbers.h"

using namespace LargeNumbers::literals;
using namespace LargeNumbers;

int main() {
    LargeNumber a = 1_LN;
    LargeNumber b = 1_LN;
    std::cout << a * b << std::endl;
}