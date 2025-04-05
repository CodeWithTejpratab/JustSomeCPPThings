//
//  function.cpp
//  cpp
//
//  Created by Rahul Ramjeawon on 4/5/25.
//

#include <iostream>
using namespace std;

void printHello() {
    cout << "Hello, World!" << endl;
}

int add(int a, int b) {
    return a + b;
}

string concatenate(string str1, string str2) {
    return str1 + str2;
}

bool isEven(int number) {
    return number % 2 == 0;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

float calculateAverage(float arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }
}

char findMaxChar(char arr[], int size) {
    char maxChar = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxChar) {
            maxChar = arr[i];
        }
    }
    return maxChar;
}

double calculateArea(double radius) {
    return 3.14159 * radius * radius;
}

int main(int argc, const char * argv[]) {
    printHello();
    
    int result = add(5, 10);
    cout << "Result: " << result << endl;
    
    isEven(4) ? cout << "Even" : cout << "Odd";
    
    int a = 5, b = 10;
    swap(a, b);
    cout << "Swapped: " << a << ", " << b << endl;
    
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    float floatArr[] = {1.5, 2.5, 3.5};
    cout << "Average: " << calculateAverage(floatArr, 3) << endl;
    
    reverseArray(arr, 5);
    printArray(arr, 5);
    
    char charArr[] = {'a', 'b', 'c', 'd'};
    cout << "Max Char: " << findMaxChar(charArr, 4) << endl;
    cout << "Area: " << calculateArea(5.0) << endl;
    
    return 0;
}
