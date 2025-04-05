//
//  main.cpp
//  cpp
//
//  Created by Rahul Ramjeawon on 4/5/25.
//


#include <iostream>
#include <vector>

int main(int argc, const char* argv[]) {
    
    // Data Types
    int integerValue = 5; // Integer
    float floatValue = 5.5; // Float
    char charValue = 'A'; // Character
    bool boolValue = true; // Boolean
    std::string stringValue = "Hello"; // String
    
    std::cout << std::endl;
    
    // Output
    std::cout << "Integer: " << integerValue << std::endl;
    std::cout << "Float: " << floatValue << std::endl;
    std::cout << "Character: " << charValue << std::endl;
    std::cout << "Boolean: " << boolValue << std::endl;
    std::cout << "String: " << stringValue << std::endl;
    
    std::cout << std::endl;
    
    // Input
    std::cout << "Enter an integer: ";
    std::cin >> integerValue;
    std::cout << "You entered: " << integerValue << std::endl;
    
    std::cout << std::endl;
    
    // Conditonal
    if (integerValue > 0) {
        std::cout << "Positive number" << std::endl;
    } else if (integerValue < 0) {
        std::cout << "Negative number" << std::endl;
    } else {
        std::cout << "Zero" << std::endl;
    }
    
    std::cout << std::endl;
    
    // Switch case
    switch (integerValue) {
        case 1:
            std::cout << "One" << std::endl;
            break;
        case 2:
            std::cout << "Two" << std::endl;
            break;
        default:
            std::cout << "Default case" << std::endl;
            break;
    }
    
    std::cout << std::endl;
    
    // Loop
    for (int i = 0; i < 5; ++i) {
        std::cout << "Loop iteration: " << i << std::endl;
    }
    
    std::cout << std::endl;
    
    // For each loop
    std::vector<int> intVec = {1, 2, 3, 4, 5};
    for (int val : intVec) {
        std::cout << "Vector value: " << val << " ";
    }
    
    std::cout << std::endl;
    
    // While loop
    int counter = 0;
    while (counter < 5) {
        std::cout << "Counter: " << counter << std::endl;
        ++counter;
    }
    
    // Do while loop
    counter = 0;
    do {
        std::cout << "Counter: " << counter << std::endl;
        ++counter;
    } while (counter < 5);
    
    return 0;
}
