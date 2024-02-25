#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<char, int> hexToDec{
        {'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7},
        {'8', 8}, {'9', 9}, {'a', 10}, {'b', 11}, {'c', 12}, {'d', 13}, {'e', 14}, {'f', 15}
    };

    int t;
    std::cin >> t;  // Number of test cases

    while (t--) {
        std::string s;
        std::cin >> s;  // Input string

        int n = s.length();
        int result = 0;

        for (int i = 0; i < n; i++) {
            result = result * 16 + hexToDec[s[i]];
        }

        std::cout << result << std::endl;
    }

    return 0;
}
