#include <iostream>
using namespace std;

int main() {
    // Variables to store user input
    double num1, num2;
    char op;
    
    // Get user input
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    // Perform calculation based on operator
    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    
    return 0;
}