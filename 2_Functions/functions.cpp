#include "functions.h"
#include <iostream>

void greet() {
    std::cout << "Hello, World!" << std::endl;
}

int add(int a, int b) {
    return a + b;
}

double multiply(double a, double b) {
    return a * b;
}

void printVector(const std::vector<int>& vec) {
    std::cout << "Vector elements: ";
    for (int elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
