#include <iostream>
#include <cctype>

int main() {
    int t;
    std::cin >> t;  // Number of test cases

    while (t--) {
        std::string s;
        std::cin >> s;  // Input string

        int sum = 0;
        int currentNumber = 0;

        for (char c : s) {
            if (std::isdigit(c)) {
                // Accumulate digits to form the current number
                currentNumber = currentNumber * 10 + (c - '0');
            } else {
                // Non-digit character encountered, add the current number to the sum
                sum += currentNumber;
                currentNumber = 0;  // Reset the current number
            }
        }

        // Add the last number in the string (if any)
        sum += currentNumber;

        std::cout << sum << std::endl;
    }

    return 0;
}
