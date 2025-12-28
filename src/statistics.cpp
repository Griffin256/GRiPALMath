#include "statistics.h"
#include <cmath>
#include <iostream>

namespace Statistics {

double sum(const std::vector<double>& data) {
    double total = 0;
    for (double val : data) {
        total += val;
    }
    return total;
}

double mean(const std::vector<double>& data) {
    if (data.empty()) {
        std::cerr << "Error: Cannot compute mean of empty data." << std::endl;
        return 0;
    }
    return sum(data) / data.size();
}

double variance(const std::vector<double>& data) {
    if (data.size() < 2) {
        std::cerr << "Error: Variance requires at least 2 data points." << std::endl;
        return 0;
    }
    double m = mean(data);
    double var = 0;
    for (double val : data) {
        var += (val - m) * (val - m);
    }
    return var / (data.size() - 1); // sample variance
}

double standard_deviation(const std::vector<double>& data) {
    return std::sqrt(variance(data));
}

}
