#include <iostream>

// Traditional enum
enum Color {
    RED,
    GREEN,
    BLUE
};

// Traditional enum with specified values
enum Direction {
    NORTH = 1,
    EAST = 2,
    SOUTH = 3,
    WEST = 4
};

// Scoped enum (enum class)
enum class Animal {
    DOG,
    CAT,
    BIRD
};

// Scoped enum with specified values
enum class Status : int {
    SUCCESS = 0,
    FAILURE = 1,
    UNKNOWN = -1
};

void printColor(Color color) {
    switch (color) {
    case RED:
        std::cout << "Color is RED" << std::endl;
        break;
    case GREEN:
        std::cout << "Color is GREEN" << std::endl;
        break;
    case BLUE:
        std::cout << "Color is BLUE" << std::endl;
        break;
    }
}

void printDirection(Direction direction) {
    switch (direction) {
    case NORTH:
        std::cout << "Direction is NORTH" << std::endl;
        break;
    case EAST:
        std::cout << "Direction is EAST" << std::endl;
        break;
    case SOUTH:
        std::cout << "Direction is SOUTH" << std::endl;
        break;
    case WEST:
        std::cout << "Direction is WEST" << std::endl;
        break;
    }
}

void printAnimal(Animal animal) {
    switch (animal) {
    case Animal::DOG:
        std::cout << "Animal is DOG" << std::endl;
        break;
    case Animal::CAT:
        std::cout << "Animal is CAT" << std::endl;
        break;
    case Animal::BIRD:
        std::cout << "Animal is BIRD" << std::endl;
        break;
    }
}

void printStatus(Status status) {
    switch (status) {
    case Status::SUCCESS:
        std::cout << "Status is SUCCESS" << std::endl;
        break;
    case Status::FAILURE:
        std::cout << "Status is FAILURE" << std::endl;
        break;
    case Status::UNKNOWN:
        std::cout << "Status is UNKNOWN" << std::endl;
        break;
    }
}

int main() {
    // Using traditional enum
    Color color = RED;
    printColor(color);

    color = GREEN;
    printColor(color);

    // Using traditional enum with specified values
    Direction direction = NORTH;
    printDirection(direction);

    direction = WEST;
    printDirection(direction);

    // Using scoped enum (enum class)
    Animal animal = Animal::CAT;
    printAnimal(animal);

    animal = Animal::DOG;
    printAnimal(animal);

    // Using scoped enum with specified values
    Status status = Status::SUCCESS;
    printStatus(status);

    status = Status::FAILURE;
    printStatus(status);

    return 0;
}
