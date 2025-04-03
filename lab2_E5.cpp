#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr1[SIZE] = {1, 4, 7, 10, 15};
    int arr2[SIZE];
    
    // Pointer to traverse arr1 from beginning to end
    int *ptr = arr1;  // Points to first element
    
    // Store elements in arr2 in the same order
    for(int i = 0; i < SIZE; i++) {
        arr2[i] = *ptr;  // Dereference pointer to get value
        ptr++;           // Move pointer forward
    }
    
    // Print original array
    cout << "Original array: ";
    for(int num : arr1) {
        cout << num << " ";
    }
    cout << endl;
    
    // Print copied array
    cout << "Copied array: ";
    for(int num : arr2) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}