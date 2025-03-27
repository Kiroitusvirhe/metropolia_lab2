#include <iostream>
#include <string>
#include <cctype> // For character type checking functions

// Define macro for minimum password length
#define MIN_LENGTH 8

using namespace std;

int main() {
    string password;
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    cout << "Enter your password: ";
    getline(cin, password);

    // Check password length
    bool lengthOK = (password.length() >= MIN_LENGTH);

    // Check character types using for loop
    for (char c : password) {
        if (isupper(c)) hasUpper = true;
        else if (islower(c)) hasLower = true;
        else if (isdigit(c)) hasDigit = true;
        else if (!isalnum(c)) hasSpecial = true;
    }

    // Determine password strength
    if (lengthOK && hasUpper && hasLower && hasDigit && hasSpecial) {
        cout << "Strong Password" << endl;
    } else {
        cout << "Weak Password - Missing:";
        if (!lengthOK) cout << " length (minimum " << MIN_LENGTH << " characters),";
        if (!hasUpper) cout << " uppercase letter,";
        if (!hasLower) cout << " lowercase letter,";
        if (!hasDigit) cout << " digit,";
        if (!hasSpecial) cout << " special character,";
        
        // Remove trailing comma and add newline
        cout << "\b \b" << endl; // Backspace to remove last comma
    }

    return 0;
}