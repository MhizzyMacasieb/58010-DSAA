#include <iostream>

int main() {
    int originalArray[] = {5, 4, 3, 2, 1};
    int newArray[5]; // Create a new array to store the reversed elements

    // Reverse the order of items and store them in the new array
    for (int i = 0; i < 5; i++) {
        newArray[i] = originalArray[4 - i];
    }

    // Print the reversed array
    std::cout << "Reversed array: [";
    for (int i = 0; i < 5; i++) {
        std::cout << newArray[i];
        if (i < 4) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}