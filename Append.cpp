#include <iostream>

int main() {
    int originalArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int newArray[11]; // Create a new array with space for the new item
    int newItem = 11; // The new item to append

    // Copy elements from the original array to the new array
    for (int i = 0; i < 10; i++) {
        newArray[i] = originalArray[i];
    }

    // Append the new item to the end of the new array
    newArray[10] = newItem;

    // Print the updated array
    std::cout << "Updated array: [";
    for (int i = 0; i < 11; i++) {
        std::cout << newArray[i];
        if (i < 10) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}