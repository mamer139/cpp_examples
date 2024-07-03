#include <iostream>
#include <string>

class MyClass {
private:
    std::string name;
    int value;

public:
    // Default constructor
    MyClass() : name("Default"), value(0) {
        std::cout << "Default constructor called for " << name << std::endl;
    }

    // Parameterized constructor
    MyClass(const std::string& name, int value) : name(name), value(value) {
        std::cout << "Parameterized constructor called for " << name << " with value " << value << std::endl;
    }

    // Copy constructor
    MyClass(const MyClass& other) : name(other.name), value(other.value) {
        std::cout << "Copy constructor called for " << name << std::endl;
    }

    // Move constructor
    MyClass(MyClass&& other) noexcept : name(std::move(other.name)), value(other.value) {
        std::cout << "Move constructor called for " << name << std::endl;
        other.value = 0; // Optional: reset the source object
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    // Display function
    void display() const {
        std::cout << "Name: " << name << ", Value: " << value << std::endl;
    }
};

int main() {
    // Default constructor
    MyClass obj1;
    obj1.display();

    // Parameterized constructor
    MyClass obj2("Alice", 10);
    obj2.display();

    // Copy constructor
    MyClass obj3 = obj2;
    obj3.display();

    // Move constructor
    MyClass obj4 = std::move(obj3);
    obj4.display();
    obj3.display(); // obj3 might be in a valid but unspecified state

    return 0;
}
