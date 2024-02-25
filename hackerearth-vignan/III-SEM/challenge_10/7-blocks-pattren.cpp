#include <iostream>
#include <string>

int main() {
    int numTests;
    std::cin >> numTests;

    for (int i = 0; i < numTests; i++) {
        int n;
        std::cin >> n;
        int space = (n - 4) / 2;

        std::string topRow(n, '*');
        std::string middleRow = '*' + std::string(space, ' ') + '*' + ' ' + '*' + std::string(space, ' ') + '*';
        std::string bottomRow = std::string(n, '*');

        std::cout << topRow << '\n';

        for (int j = 0; j < space; j++) {
            std::cout << middleRow << '\n';
        }

        std::cout << bottomRow << '\n';
        std::cout << middleRow << '\n';
        std::cout << bottomRow << '\n';

        for (int j = 0; j < space; j++) {
            std::cout << middleRow << '\n';
        }

        std::cout << bottomRow << '\n';
        std::cout << '\n';
    }

    return 0;
}
