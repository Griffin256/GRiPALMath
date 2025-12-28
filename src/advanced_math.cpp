#include "advanced_math.h"
#include <iostream>
#include <cmath>

namespace AdvancedMath {

double power(double base, double exponent) {
    return std::pow(base, exponent);
}

long double ipower(long double base, unsigned int exp) {
    long double result = 1.0L;
    while (exp--) {
        result *= base;
    }
    return result;
}

long double square_root(long double x) {
    if (x < 0) {
        std::cerr << "Error: Square root of negative number is not allowed." << std::endl;
        return 0;
    }
    return std::sqrt(x);
}

unsigned long long factorial(unsigned int n) {
    if (n > 20) {
        std::cerr << "Error: Factorial overflow." << std::endl;
        return 0;
    }
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

long double absolute(long double x) {
    return (x < 0) ? -x : x;
}

}
