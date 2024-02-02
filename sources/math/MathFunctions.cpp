#include <vector>
#include <complex>

#include "MathFunctions.h"

typedef std::complex<double> complex_t;

namespace MyMath {
    void fft(std::vector<complex_t> &a, bool invert) {
        long long size = a.size();
        if (size > 1) {
            std::vector<complex_t> a0(size / 2);
            std::vector<complex_t> a1(size / 2);
            for (int i = 0, j = 0; i < size; i += 2, ++j) {
                a0[j] = a[i];
                a1[j] = a[i + 1];
            }
            fft(a0, invert);
            fft(a1, invert);

            double ang = 2 * acos(-1) / size * (invert ? -1 : 1);
            complex_t w(1);
            complex_t wn(std::polar(1., ang));
            for (int i = 0; i < size / 2; ++i) {
                a[i] = a0[i] + w * a1[i];
                a[i + size / 2] = a0[i] - w * a1[i];
                if (invert) {
                    a[i] /= 2;
                    a[i + size / 2] /= 2;
                }
                w *= wn;
            }
        }
    }
}