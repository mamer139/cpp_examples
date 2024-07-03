#include <iostream>
#include <string>

// Base class
class Person {
protected:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& name, int age) : name(name), age(age) {}

    // Display function
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Derived class from Person (Single Inheritance)
class Student : public Person {
private:
    int studentID;

public:
    // Constructor
    Student(const std::string& name, int age, int studentID)
        : Person(name, age), studentID(studentID) {}

    // Display function (overrides base class function)
    void display() const {
        Person::display();  // Call base class display function
        std::cout << "Student ID: " << studentID << std::endl;
    }
};

// Another derived class from Person (Hierarchical Inheritance)
class Teacher : public Person {
private:
    std::string subject;

public:
    // Constructor
    Teacher(const std::string& name, int age, const std::string& subject)
        : Person(name, age), subject(subject) {}

    // Display function (overrides base class function)
    void display() const {
        Person::display();  // Call base class display function
        std::cout << "Subject: " << subject << std::endl;
    }
};

// Multilevel Inheritance
class GraduateStudent : public Student {
private:
    std::string degree;

public:
    // Constructor
    GraduateStudent(const std::string& name, int age, int studentID, const std::string& degree)
        : Student(name, age, studentID), degree(degree) {}

    // Display function (overrides base class function)
    void display() const {
        Student::display();  // Call base class display function
        std::cout << "Degree: " << degree << std::endl;
    }
};

int main() {
    // Creating objects of derived classes
    Student student("Alice", 20, 12345);
    Teacher teacher("Bob", 45, "Mathematics");
    GraduateStudent gradStudent("Charlie", 24, 67890, "Computer Science");

    // Display information
    std::cout << "Student Information:" << std::endl;
    student.display();

    std::cout << "\nTeacher Information:" << std::endl;
    teacher.display();

    std::cout << "\nGraduate Student Information:" << std::endl;
    gradStudent.display();

    return 0;
}
