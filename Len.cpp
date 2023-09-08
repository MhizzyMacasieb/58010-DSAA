#include <iostream>

int main() {
    int myArray[] = {1, 2, 3, 4, 5}; // Your array

    // Calculate the length of the array
    int length = sizeof(myArray) / sizeof(myArray[0]);

    // Print the length
    std::cout << "The length of the array is: " << length << std::endl;

    return 0;
}