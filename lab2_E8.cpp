#include <iostream>
using namespace std;

int main() {
    // Initial variable
    int a = 100;
    
    // Create a reference to a
    int& refA = a;
    
    // Display initial state
    cout << "Initial values:\n";
    cout << "a = " << a << ", refA = " << refA << endl;
    cout << "Address of a: " << &a << ", Address of refA: " << &refA << endl << endl;
    
    // Modify through reference
    refA = 30;
    cout << "After modifying refA (refA = 30):\n";
    cout << "a = " << a << ", refA = " << refA << endl << endl;
    
    // Modify original variable
    a = 50;
    cout << "After modifying a directly (a = 50):\n";
    cout << "a = " << a << ", refA = " << refA << endl;
    
    return 0;
}