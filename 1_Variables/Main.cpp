#include <iostream>
#include <string>
#include <vector>
#include <array>

int main() {
    // Primitive data types
    int integerVar = 42;              // Integer
    float floatVar = 3.14f;           // Floating point
    double doubleVar = 2.71828;       // Double precision floating point
    char charVar = 'A';               // Character
    bool boolVar = true;              // Boolean

    // Derived data types
    int intArray[5] = { 1, 2, 3, 4, 5 }; // Array of integers
    std::string stringVar = "Hello, World!"; // String (using std::string from the C++ Standard Library)

    // User-defined data types
    struct Person {
        std::string name;
        int age;
    };

    Person personVar = { "John Doe", 30 }; // Variable of type Person

    // Modern C++ data types
    std::vector<int> intVector = { 1, 2, 3, 4, 5 }; // Vector (dynamic array)
    std::array<int, 3> intStdArray = { 1, 2, 3 };   // std::array (fixed-size array)

    // Output the variables
    std::cout << "Integer: " << integerVar << std::endl;
    std::cout << "Float: " << floatVar << std::endl;
    std::cout << "Double: " << doubleVar << std::endl;
    std::cout << "Character: " << charVar << std::endl;
    std::cout << "Boolean: " << std::boolalpha << boolVar << std::endl;

    std::cout << "Integer Array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "String: " << stringVar << std::endl;

    std::cout << "Person: Name = " << personVar.name << ", Age = " << personVar.age << std::endl;

    std::cout << "Vector: ";
    for (int i : intVector) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "std::array: ";
    for (int i : intStdArray) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
