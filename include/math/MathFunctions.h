#ifndef EXAMPLE_MATHFUNTIONS_H
#define EXAMPLE_MATHFUNTIONS_H

#endif //EXAMPLE_MATHFUNTIONS_H

#include <vector>
#include <complex>
#include "MagicNums.h"

typedef std::complex<double> complex_t;

namespace MyMath {
    void fft(std::vector<complex_t> &, bool);
}