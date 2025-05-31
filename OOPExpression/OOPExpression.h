#ifndef OOPEXPRESSION_H
#define OOPEXPRESSION_H

class ExpressionCalculator {
private:
    double a, b, x;

public:
    ExpressionCalculator(double a, double b, double x);
    double compute() const;
};

#endif
