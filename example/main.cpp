#include <iostream>
#include <vector>
#include "math_operations.h"
#include "advanced_math.h"
#include "statistics.h"

using namespace SimpleMath;
using namespace AdvancedMath;
using namespace Statistics;
int main() {
    
    std::cout << "=== SimpleMath Library Example ===\n\n";

    // --- Basic math ---
    std::cout << "10 + 5 = " << add(10, 5) << std::endl;
    std::cout << "10 - 5 = " << subtract(10, 5) << std::endl;
    std::cout << "10 * 5 = " << multiply(10, 5) << std::endl;
    std::cout << "10 / 0 = " << divide(10, 0) << std::endl; // safe division

    std::cout << "\n--- Advanced Math ---\n";
    std::cout << "2 ^ 3 = " << power(2, 3) << std::endl;
    std::cout << "sqrt(16) = " << square_root(16) << std::endl;
    std::cout << "5! = " << factorial(5) << std::endl;
    std::cout << "abs(-42) = " << absolute(-42) << std::endl;

    std::cout << "\n--- Statistics ---\n";
    std::vector<double> data = {1, 2, 3, 4, 5};
    std::cout << "Data: ";
    for (double x : data) std::cout << x << " ";
    std::cout << "\nMean = " << mean(data) 
              << ", Variance = " << variance(data)
              << ", Std Dev = " << standard_deviation(data) << std::endl;

    std::cout << "\n=== End of Example ===\n";
    return 0;
}
