#include <iostream>
#include <string>

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() const {
        std::cout << "Animal makes a sound" << std::endl;
    }

    // Virtual destructor
    virtual ~Animal() {
        std::cout << "Animal destructor called" << std::endl;
    }
};

// Derived class: Dog
class Dog : public Animal {
public:
    // Override virtual function
    void makeSound() const override {
        std::cout << "Dog barks" << std::endl;
    }

    // Destructor
    ~Dog() {
        std::cout << "Dog destructor called" << std::endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    // Override virtual function
    void makeSound() const override {
        std::cout << "Cat meows" << std::endl;
    }

    // Destructor
    ~Cat() {
        std::cout << "Cat destructor called" << std::endl;
    }
};

void demonstratePolymorphism(const Animal& animal) {
    animal.makeSound();
}

int main() {
    // Create instances of derived classes
    Dog dog;
    Cat cat;

    // Demonstrate polymorphism using references
    demonstratePolymorphism(dog); // Should call Dog::makeSound
    demonstratePolymorphism(cat); // Should call Cat::makeSound

    // Demonstrate polymorphism using pointers
    Animal* animalPtr1 = new Dog();
    Animal* animalPtr2 = new Cat();

    animalPtr1->makeSound(); // Should call Dog::makeSound
    animalPtr2->makeSound(); // Should call Cat::makeSound

    // Clean up
    delete animalPtr1; // Should call Dog destructor, then Animal destructor
    delete animalPtr2; // Should call Cat destructor, then Animal destructor

    return 0;
}
