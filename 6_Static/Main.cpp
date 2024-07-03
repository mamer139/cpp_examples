#include <iostream>

// Static variable with file scope
static int fileScopeCounter = 0;

// Function with static local variable
void staticLocalVariableExample() {
    static int counter = 0;
    counter++;
    std::cout << "Static local variable counter: " << counter << std::endl;
}

// Structure with static member
struct StructExample {
    static int structCounter;

    static void incrementCounter() {
        structCounter++;
    }
};

// Initialize static member variable
int StructExample::structCounter = 0;

// Class with static member variable and static member function
class ClassExample {
private:
    static int classCounter;

public:
    static void incrementCounter() {
        classCounter++;
    }

    static int getCounter() {
        return classCounter;
    }
};

// Initialize static member variable
int ClassExample::classCounter = 0;

int main() {
    // File scope static variable
    std::cout << "File scope static variable: " << fileScopeCounter << std::endl;
    fileScopeCounter++;
    std::cout << "File scope static variable after increment: " << fileScopeCounter << std::endl;

    // Static local variable
    staticLocalVariableExample();
    staticLocalVariableExample();

    // Static member in struct
    std::cout << "\nStatic member in struct:" << std::endl;
    std::cout << "Struct counter: " << StructExample::structCounter << std::endl;
    StructExample::incrementCounter();
    std::cout << "Struct counter after increment: " << StructExample::structCounter << std::endl;

    // Static member in class
    std::cout << "\nStatic member in class:" << std::endl;
    std::cout << "Class counter: " << ClassExample::getCounter() << std::endl;
    ClassExample::incrementCounter();
    std::cout << "Class counter after increment: " << ClassExample::getCounter() << std::endl;

    return 0;
}
