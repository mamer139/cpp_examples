#include <iostream>
#include <vector>

// Function to demonstrate the use of return
bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    // If-else control flow
    int num = 10;
    if (num > 0) {
        std::cout << num << " is positive." << std::endl;
    }
    else if (num < 0) {
        std::cout << num << " is negative." << std::endl;
    }
    else {
        std::cout << num << " is zero." << std::endl;
    }

    // Switch control flow
    int day = 3;
    switch (day) {
    case 1:
        std::cout << "Monday" << std::endl;
        break;
    case 2:
        std::cout << "Tuesday" << std::endl;
        break;
    case 3:
        std::cout << "Wednesday" << std::endl;
        break;
    case 4:
        std::cout << "Thursday" << std::endl;
        break;
    case 5:
        std::cout << "Friday" << std::endl;
        break;
    case 6:
        std::cout << "Saturday" << std::endl;
        break;
    case 7:
        std::cout << "Sunday" << std::endl;
        break;
    default:
        std::cout << "Invalid day" << std::endl;
        break;
    }

    // For loop with break and continue
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    std::cout << "For loop with break and continue: ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == 3) {
            continue; // Skip the rest of the loop body when the element is 3
        }
        if (numbers[i] == 4) {
            break; // Exit the loop when the element is 4
        }
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Range-based for loop with break and continue
    std::cout << "Range-based for loop with break and continue: ";
    for (int num : numbers) {
        if (num == 3) {
            continue; // Skip the rest of the loop body when the element is 3
        }
        if (num == 4) {
            break; // Exit the loop when the element is 4
        }
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // While loop with break and continue
    int count = 0;
    std::cout << "While loop with break and continue: ";
    while (count < 5) {
        ++count;
        if (count == 3) {
            continue; // Skip the rest of the loop body when count is 3
        }
        if (count == 4) {
            break; // Exit the loop when count is 4
        }
        std::cout << count << " ";
    }
    std::cout << std::endl;

    // Do-while loop with break and continue
    count = 0;
    std::cout << "Do-while loop with break and continue: ";
    do {
        ++count;
        if (count == 3) {
            continue; // Skip the rest of the loop body when count is 3
        }
        if (count == 4) {
            break; // Exit the loop when count is 4
        }
        std::cout << count << " ";
    } while (count < 5);
    std::cout << std::endl;

    // Using return in a function
    int checkNum = 7;
    if (isEven(checkNum)) {
        std::cout << checkNum << " is even." << std::endl;
    }
    else {
        std::cout << checkNum << " is odd." << std::endl;
    }

    return 0;
}
