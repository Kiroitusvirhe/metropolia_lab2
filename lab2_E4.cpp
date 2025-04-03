#include <iostream>
using namespace std;

int main() {
    double number;
    
    cout << "Number Squaring Program" << endl;
    cout << "Enter numbers (negative to stop):" << endl;
    
    while(true) {
        // Get user input
        cout << "Enter a number: ";
        cin >> number;
        
        // Check for negative number (termination condition)
        if(number < 0) {
            cout << "Negative number entered. Program stopped." << endl;
            break;
        }
        
        // Check for zero (skip condition)
        if(number == 0) {
            cout << "Zero entered. Skipping..." << endl;
            continue;
        }
        
        // Process valid positive number
        double square = number * number;
        cout << "Square of " << number << " is " << square << endl;
    }
    
    return 0;
}