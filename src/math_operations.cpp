#include "math_operations.h"
#include <iostream>

namespace SimpleMath {

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        std::cerr << "Error: Division By Zero is not allowed." << std::endl;
        return 0;
    }
    return a / b;
}

}
