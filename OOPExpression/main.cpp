#include <iostream>
#include "OOPExpression.h"

void calculateWithValues(double a, double b, double x) {
    try {
        ExpressionCalculator calculator(a, b, x);
        double result = calculator.compute();
        std::cout << "Result: " << result << "\n";
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
}

int main() {
    std::cout << "=== Default values ===\n";
    calculateWithValues(3.16, 7.11, -1.23);

    char choice;
    std::cout << "\nDo you want to enter new values? (y/n): ";
    std::cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        double a, b, x;
        std::cout << "Enter a: ";
        std::cin >> a;
        std::cout << "Enter b: ";
        std::cin >> b;
        std::cout << "Enter x: ";
        std::cin >> x;
        calculateWithValues(a, b, x);
    }

    return 0;
}
