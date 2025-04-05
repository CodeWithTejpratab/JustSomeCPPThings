//
//  pointer.cpp
//  cpp
//
//  Created by Rahul Ramjeawon on 4/5/25.
//

#include <stdio.h>
#include <iostream>

int main(int argc, const char * argv[]) {
    
    int* intPointer = nullptr;
    int firstValue = 5;
    int secondValue = 6;
    intPointer = &firstValue;
    std::cout << "Value: " << *intPointer << std::endl;
    int** intPointerPointer = &intPointer;
    std::cout << "Value: " << **intPointerPointer << std::endl;
    **intPointerPointer = 7;
    std::cout << "Value: " << **intPointerPointer << std::endl;
    std::cout << "Value: " << *intPointer << std::endl;
    std::cout << "Value: " << firstValue << std::endl;
    *intPointerPointer = &secondValue;
    std::cout << "Value: " << **intPointerPointer << std::endl;
    std::cout << "Value: " << *intPointer << std::endl;
    std::cout << "Value: " << firstValue << std::endl;
    **intPointerPointer = firstValue;
    std::cout << "Value: " << **intPointerPointer << std::endl;
    std::cout << "Value: " << *intPointer << std::endl;
    std::cout << "Value: " << firstValue << std::endl;
    std::cout << "Value2: " << secondValue << std::endl;
    
    int arraySize = 5;
    int* intArray = new int[arraySize];
    
    for (int i = 0; i < arraySize; ++i) {
        intArray[i] = i + 1;
    }
    
    for (auto i = 0; i < arraySize; ++i) {
        std::cout << intArray[i] << " ";
        std::cout << *(intArray + i) << " ";
    }
    std::cout << std::endl;
    
    delete[] intArray;
    intPointer = nullptr;
    intPointerPointer = nullptr;
    delete intPointer;
    delete intPointerPointer;
    
    int numRows = 3;
    int numCols = 4;
    
    // Step 1: Allocate memory for row pointers
    int** twoDArray = new int*[numRows];
    
    // Step 2: Allocate memory for each row
    for (int i = 0; i < numRows; ++i) {
        twoDArray[i] = new int[numCols];
    }
    
    int elementCounter = 1;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            twoDArray[i][j] = elementCounter++;
        }
    }
    
    // Step 4: Print the array
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            std::cout << twoDArray[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << "2D Array: "<< *(*(twoDArray + 1) + 1) << std::endl;
    
    // Step 5: Free the memory
    for (int i = 0; i < numRows; ++i) {
        delete[] twoDArray[i];
    }
    delete[] twoDArray;
    
    return 0;
}
