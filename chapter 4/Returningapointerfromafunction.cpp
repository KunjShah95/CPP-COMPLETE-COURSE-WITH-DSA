#include <iostream>

int* createArray(int size) {
    int* arr = new int[size]; // Dynamically allocate memory for an array
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10; // Initialize array elements
    }
    return arr; // Return the pointer to the array
}

int main() {
    int size = 10;
    int* myArray = createArray(size); // Function returns a pointer to the array
    
    // Print the array
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] myArray; // Don't forget to free the allocated memory
    return 0;
}
