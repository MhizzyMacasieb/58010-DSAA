#include <iostream>

int main() {
    int originalArray[] = {1, 2, 3, 4, 5};
    int newItem = 6; // The new item to insert

    // Shift elements to the right to make space for the new item
    for (int i = 4; i >= 1; i--) {
        originalArray[i + 1] = originalArray[i];
    }

    // Insert the new item before the second element
    originalArray[1] = newItem;

    // Print the updated array
    std::cout << "Updated array: [";
    for (int i = 0; i < 6; i++) {
        std::cout << originalArray[i];
        if (i < 5) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}