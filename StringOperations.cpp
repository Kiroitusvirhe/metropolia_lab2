#include <iostream>
#include <string>
#include <algorithm> // for transform() and reverse()
#include <cctype>    // for toupper()

using namespace std;

int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        ch = tolower(ch); // Convert to lowercase for easier checking
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input); // Read the entire line including spaces

    // 1. Convert to uppercase
    string upperStr = input;
    transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
    cout << "Uppercase string: " << upperStr << endl;

    // 2. Count vowels
    int vowelCount = countVowels(input);
    cout << "Number of vowels: " << vowelCount << endl;

    // 3. Reverse the string
    string reversedStr = input;
    reverse(reversedStr.begin(), reversedStr.end());
    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}