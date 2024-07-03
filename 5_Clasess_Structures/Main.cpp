#include <iostream>
#include <string>

// Structure definition
struct Person {
    // Members are public by default
    std::string name;
    int age;

    // Member function
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Class definition
class Student {
private:
    // Members are private by default
    std::string name;
    int age;
    int studentID;

public:
    // Constructor
    Student(std::string n, int a, int id) : name(n), age(a), studentID(id) {}

    // Public member functions (methods)
    void setName(std::string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setStudentID(int id) {
        studentID = id;
    }

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    int getStudentID() const {
        return studentID;
    }

    // Member function
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Student ID: " << studentID << std::endl;
    }
};

int main() {
    // Create and initialize a Person struct
    Person person;
    person.name = "Alice";
    person.age = 30;
    std::cout << "Person structure:" << std::endl;
    person.display();

    // Create and initialize a Student class
    Student student("Bob", 20, 12345);
    std::cout << "\nStudent class:" << std::endl;
    student.display();

    // Modify student details using member functions
    student.setName("Charlie");
    student.setAge(21);
    student.setStudentID(67890);
    std::cout << "\nModified Student details:" << std::endl;
    student.display();

    return 0;
}
