#include <iostream>

// Function to swap two integers using pointers
void swapPointers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to swap two integers using references
void swapReferences(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    // Demonstrate pointers
    int* p = &x; // Pointer to x
    std::cout << "Pointer example:" << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Value of p (address of x): " << p << std::endl;
    std::cout << "Value pointed to by p: " << *p << std::endl;

    // Modify the value of x using the pointer
    *p = 15;
    std::cout << "Modified x through pointer: " << x << std::endl;

    // Demonstrate references
    int& ref = y; // Reference to y
    std::cout << "\nReference example:" << std::endl;
    std::cout << "Value of y: " << y << std::endl;
    std::cout << "Value of ref (reference to y): " << ref << std::endl;

    // Modify the value of y using the reference
    ref = 25;
    std::cout << "Modified y through reference: " << y << std::endl;

    // Swap using pointers
    std::cout << "\nSwapping using pointers:" << std::endl;
    std::cout << "Before swap - x: " << x << ", y: " << y << std::endl;
    swapPointers(&x, &y);
    std::cout << "After swap - x: " << x << ", y: " << y << std::endl;

    // Swap using references
    std::cout << "\nSwapping using references:" << std::endl;
    std::cout << "Before swap - x: " << x << ", y: " << y << std::endl;
    swapReferences(x, y);
    std::cout << "After swap - x: " << x << ", y: " << y << std::endl;

    return 0;
}
