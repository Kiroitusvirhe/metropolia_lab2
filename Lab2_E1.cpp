#include <iostream>
#include <cmath> // For ceil and floor functions
using namespace std;

// Part A: Multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Part B: Multiply two doubles (overloaded version)
double multiply(double a, double b) {
    return a * b;
}

// Part C: Overloaded version with three inputs
double multiply(int a, double b, bool flag) {
    double result = a * b;
    if (flag) {
        // Round to nearest integer
        return round(result);
    }
    return result;
}

int main() {
    int int1, int2;
    double double1, double2;
    int intForMixed;
    double doubleForMixed;
    bool flagValue;
    char flagChoice;

    // Part A: Integer multiplication
    cout << "Enter two integers for multiplication (separated by space): ";
    cin >> int1 >> int2;
    cout << "Integer multiplication (" << int1 << " * " << int2 << "): " 
         << multiply(int1, int2) << endl << endl;

    // Part B: Double multiplication
    cout << "Enter two doubles for multiplication (separated by space): ";
    cin >> double1 >> double2;
    cout << "Double multiplication (" << double1 << " * " << double2 << "): " 
         << multiply(double1, double2) << endl << endl;

    // Part C: Mixed multiplication
    cout << "Enter an integer and a double for mixed multiplication (separated by space): ";
    cin >> intForMixed >> doubleForMixed;
    cout << "Should the result be rounded? (y/n): ";
    cin >> flagChoice;
    flagValue = (flagChoice == 'y' || flagChoice == 'Y');

    double result = multiply(intForMixed, doubleForMixed, flagValue);
    cout << "Mixed multiplication (" << intForMixed << " * " << doubleForMixed << ")";
    
    if (flagValue) {
        cout << " (rounded): " << static_cast<int>(result) << endl;
    } else {
        cout << " (not rounded): " << result << endl;
    }

    return 0;
}