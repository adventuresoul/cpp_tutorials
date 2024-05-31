#include <iostream>

int main() {
    int rows, cols;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Create a dynamic 2D array
    int** dynamicArray = new int*[rows]; // Create an array of int pointers

    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new int[cols]; // Allocate memory for each row
    }

    // Initialize and use the dynamic 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            dynamicArray[i][j] = i * cols + j;
        }
    }

    // Print the dynamic 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << dynamicArray[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArray[i]; // Free memory for each row
    }
    delete[] dynamicArray; // Free memory for the array of pointers

    return 0;
}
