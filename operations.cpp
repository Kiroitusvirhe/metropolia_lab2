#include <iostream>
#include <string>

// MathOperations namespace
namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
}

// TextOperations namespace
namespace TextOperations {
    std::string concat(std::string str1, std::string str2) {
        return str1 + str2;
    }
}

int main() {
    // Using MathOperations
    int num1 = 5, num2 = 7;
    int sum = MathOperations::add(num1, num2);
    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    // Using TextOperations
    std::string first = "Hello, ", second = "World!";
    std::string combined = TextOperations::concat(first, second);
    std::cout << "Concatenated string: " << combined << std::endl;

    return 0;
}