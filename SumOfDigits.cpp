#include <iostream>
using namespace std;

int main() {
    int number, digit, sum = 0;

    // Take input from user
    cout << "Enter an integer: ";
    cin >> number;

    // Calculate sum of digits using for loop
    for (int temp = number; temp != 0; temp /= 10) {
        digit = temp % 10;  // Extract the last digit
        sum += digit;       // Add the digit to sum
    }

    // Output the result
    cout << "Sum of digits: " << sum << endl;

    return 0;
}