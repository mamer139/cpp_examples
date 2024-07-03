#include <iostream>
#include "functions.h"

int main() {
    // Calling a function with no parameters and no return value
    greet();

    // Calling a function with parameters and a return value
    int sum = add(5, 3);
    std::cout << "Sum: " << sum << std::endl;

    // Calling another function with parameters and a return value
    double product = multiply(2.5, 4.0);
    std::cout << "Product: " << product << std::endl;

    // Calling a function with a constant reference parameter
    std::vector<int> myVector = { 1, 2, 3, 4, 5 };
    printVector(myVector);

    return 0;
}
