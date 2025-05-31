#include "OOPExpression.h"
#include <cmath>
#include <stdexcept>

ExpressionCalculator::ExpressionCalculator(double a, double b, double x)
    : a(a), b(b), x(x) {
}

double ExpressionCalculator::compute() const {
    double numerator = std::exp(a * x) * std::cos(b - x);
    double denominator = std::sin(a + x);

    if (std::abs(denominator) < 1e-10) {
        throw std::runtime_error("Denominator is too close to zero.");
    }

    return numerator / denominator;
}
