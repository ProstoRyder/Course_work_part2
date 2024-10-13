#include <iostream>
#include "calculator.h"

void printHelloWorld(); 

int main() {
    printHelloWorld();

    Calculator calc;
    
    double a = 6.0, b = 3.0;

    std::cout << "Add: " << calc.Add(a, b) << std::endl;      // 6.0 + 3.0 + 0.5 = 9.5
    std::cout << "Sub: " << calc.Sub(a, b) << std::endl;      // 6.0 - 3.0 = 3.0 + 0.5 = 3.5
    std::cout << "Mul: " << calc.Mul(a, b) << std::endl;      // 6.0 * 3.0 = 18.0
    std::cout << "Div: " << calc.Div(a, b) << std::endl;      // 6.0 / 3.0 = 2.0

   

    return 0;
}
