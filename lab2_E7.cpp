#include <iostream>
using namespace std;

int main() {
    int x = 100;
    
    // Create two pointers pointing to the same memory address
    int* p1 = &x;  // Pointer 1 directly points to x
    int* p2 = p1;   // Pointer 2 gets the same address (shallow copy)
    
    // Display initial state
    cout << "Initial values:\n";
    cout << "x: " << x << ", *p1: " << *p1 << ", *p2: " << *p2 << endl;
    cout << "Addresses: &x=" << &x << ", p1=" << p1 << ", p2=" << p2 << endl << endl;
    
    // Modify through pointer 1
    *p1 = 200;
    cout << "After modifying through p1 (*p1 = 200):\n";
    cout << "x: " << x << ", *p1: " << *p1 << ", *p2: " << *p2 << endl << endl;
    
    // Modify through pointer 2
    *p2 = 300;
    cout << "After modifying through p2 (*p2 = 300):\n";
    cout << "x: " << x << ", *p1: " << *p1 << ", *p2: " << *p2 << endl << endl;
    
    // Change x directly
    x = 400;
    cout << "After modifying x directly (x = 400):\n";
    cout << "x: " << x << ", *p1: " << *p1 << ", *p2: " << *p2 << endl;
    
    return 0;
}