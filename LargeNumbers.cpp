#include <vector>
#include "LargeNumbers.h"

namespace LargeNumbers {
    struct LargeNumber {
        std::vector<int> significand;
        std::vector<int> dotPos;
        bool is_negative;

        LargeNumber operator+(const LargeNumber& other) {
            LargeNumber ret;

        }
    };
}