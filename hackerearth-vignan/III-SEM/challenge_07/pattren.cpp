#include <iostream>
#include <string>

int main() {
    int numTests;
    std::cin >> numTests;

    for (int i = 0; i < numTests; i++) {
        int n;
        std::cin >> n;
        int space = (n-4)/2;
        // Print the top row
        std::cout << std::string(n, '*') << std::endl;

        // Print the middle section
        for (int j = 0; j < space; j++) {
            
            std::cout << '*' << std::string(space, ' ') << '*' << ' ' << '*' << std::string(space, ' ') << '*' << std::endl;
        }

        // Print the bottom row
        std::cout << std::string(n, '*') << std::endl;

        // Print the middle part
        std::cout << '*' << std::string(space, ' ') << '*' << ' ' << '*' << std::string(space, ' ') << '*' << std::endl;

        // Print the bottom part
        std::cout << std::string(n, '*') << std::endl;

        // Print the middle section
        for (int j = 0; j < space; j++) {

            std::cout << '*' << std::string(space, ' ') << '*' << ' ' << '*' << std::string(space, ' ') << '*' << std::endl;
        }

        // Print the bottom row
        std::cout << std::string(n, '*') << std::endl;

        // Print a blank line
        std::cout << std::endl;
    }

    return 0;
}
