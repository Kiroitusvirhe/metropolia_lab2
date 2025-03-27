#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;

    // Take input from user
    cout << "Enter a number: ";
    cin >> number;

    // Reverse the digits using for loop
    for (int temp = number; temp != 0; temp /= 10) {
        int digit = temp % 10;  // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit;  // Build the reversed number
    }

    // Output the result
    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}