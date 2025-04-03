#include <iostream>
using namespace std;

// 1. Without pointers or references (doesn't actually swap original variables)
void swapBasic(float a, float b) {
    float temp = a;
    a = b;
    b = temp;
    cout << "Inside swapBasic: a = " << a << ", b = " << b << endl;
}

// 2. Using pointers
void swapUsingPointers(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// 3. Using references
void swapUsingReferences(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    float x = 5.5f, y = 10.5f;
    
    // Original values
    cout << "Before any swaps: x = " << x << ", y = " << y << endl << endl;
    
    // 1. Basic swap (won't affect original variables)
    swapBasic(x, y);
    cout << "After swapBasic: x = " << x << ", y = " << y << endl << endl;
    
    // 2. Pointer swap
    swapUsingPointers(&x, &y);
    cout << "After swapUsingPointers: x = " << x << ", y = " << y << endl << endl;
    
    // Reset values for demonstration
    x = 5.5f; y = 10.5f;
    
    // 3. Reference swap
    swapUsingReferences(x, y);
    cout << "After swapUsingReferences: x = " << x << ", y = " << y << endl;
    
    return 0;
}