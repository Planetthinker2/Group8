#include <iostream>
#include "Calculator.h"

int main()
{

    int result1 = Calculator::Add(1, 1);

    float result2 = Calculator::Add(2.0f, 1.0f);
    std::cout << "Result 1: " <<  result1 << "\n";
    std::cout << "Result 2: " << result2 << "\n";
}
