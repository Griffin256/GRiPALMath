#ifndef STATISTICS_H
#define STATISTICS_H

#include <vector>

namespace Statistics {
    double mean(const std::vector<double>& data);
    double variance(const std::vector<double>& data);
    double standard_deviation(const std::vector<double>& data);
    double sum(const std::vector<double>& data);
}

#endif
