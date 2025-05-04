#include <iostream>

using namespace std;

class MyClass {
public:
    int value;

    // Constructor
    MyClass(int v) : value(v) {
        cout << "Constructor called with value: " << value << endl;
    }

    // Copy Constructor
    MyClass(const MyClass &other) : value(other.value) {
        cout << "Copy constructor called, copied value: " << value << endl;
    }

    // Move Constructor
    MyClass(MyClass &&other) noexcept : value(other.value) {
        other.value = 0; // Reset the moved-from object
        cout << "Move constructor called, moved value: " << value << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called for value: " << value << endl;
    }
    // Method to display value
    void display() const {
        cout << "Value: " << value << endl;
    }
    // Assignment operator
    MyClass& operator=(const MyClass &other) {
        if (this != &other) { // Check for self-assignment
            value = other.value;
            cout << "Assignment operator called, assigned value: " << value << endl;
        }
        return *this;
    }
    // Move assignment operator
    MyClass& operator=(MyClass &&other) noexcept {
        if (this != &other) { // Check for self-assignment
            value = other.value;
            other.value = 0; // Reset the moved-from object
            cout << "Move assignment operator called, moved value: " << value << endl;
        }
        return *this;
    }
    // Method to set value
    void setValue(int v) {
        value = v;
        cout << "Value set to: " << value << endl;
    }
    // Method to get value
    int getValue() const {
        return value;
    }
    // Method to add value
    void addValue(int v) {
        value += v;
        cout << "Value after addition: " << value << endl;
    }
    // Method to subtract value
    void subtractValue(int v) {
        value -= v;
        cout << "Value after subtraction: " << value << endl;
    }
    // Method to multiply value
    void multiplyValue(int v) {
        value *= v;
        cout << "Value after multiplication: " << value << endl;
    }
    // Method to divide value
    void divideValue(int v) {
        if (v != 0) {
            value /= v;
            cout << "Value after division: " << value << endl;
        } else {
            cout << "Division by zero is not allowed." << endl;
        }
    }
    // Method to reset value
    void resetValue() {
        value = 0;
        cout << "Value reset to: " << value << endl;
    }
    // Method to check if value is positive
    bool isPositive() const {
        return value > 0;
    }
    // Method to check if value is negative
    bool isNegative() const {
        return value < 0;
    }
    // Method to check if value is zero
    bool isZero() const {
        return value == 0;
    }
    // Method to compare with another MyClass object
    bool isEqual(const MyClass &other) const {
        return value == other.value;
    }
    // Method to compare with another MyClass object
    bool isGreater(const MyClass &other) const {
        return value > other.value;
    }
    // Method to compare with another MyClass object
    bool isLess(const MyClass &other) const {
        return value < other.value;
    }
    // Method to print value
    void print() const {
        cout << "MyClass value: " << value << endl;
    }
    // Method to increment value
    void increment() {
        ++value;
        cout << "Value incremented to: " << value << endl;
    }
    // Method to decrement value
    void decrement() {
        --value;
        cout << "Value decremented to: " << value << endl;
    }

    // Method to double value
    void doubleValue() {
        value *= 2;
        cout << "Value doubled to: " << value << endl;
    }
};

int main() {
    MyClass obj1(10); // Constructor
    obj1.display();

    MyClass obj2 = obj1; // Copy Constructor
    obj2.display();

    MyClass obj3 = move(obj1); // Move Constructor
    obj3.display();
    obj1.display(); // Should show value reset to 0

    MyClass obj4(20);
    obj4 = obj2; // Assignment Operator
    obj4.display();

    MyClass obj5(30);
    obj5 = move(obj3); // Move Assignment Operator
    obj5.display();
    obj3.display(); // Should show value reset to 0

    return 0;
}