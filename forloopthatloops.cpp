#include <iostream>
using namespace std;

// Define a macro for the upper limit (50)
#define UPPER_LIMIT 50

int main() {
    // Loop to print even numbers from 2 to UPPER_LIMIT
    for (size_t i = 2; i <= UPPER_LIMIT; i += 2) {
        cout << i << " ";
    }
    return 0;
}