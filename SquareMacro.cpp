#include <iostream>
using namespace std;

// Define SQUARE macro to calculate x squared
#define SQUARE(x) ((x) * (x))

int main() {
    int num;
    
    // Take input from user
    cout << "Enter an integer: ";
    cin >> num;
    
    // Calculate and print square using the macro
    cout << "The square of " << num << " is: " << SQUARE(num) << endl;
    
    return 0;
}