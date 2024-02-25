#include <iostream>
#include <string>
#include <algorithm>

bool isVowel(char c) {
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int t;
    std::cin >> t;  // Number of test cases

    while (t--) {
        int n;
        std::cin >> n;  // Size of the string

        std::string s;
        std::cin >> s;  // Input string

        int left = 0;
        int right = n - 1;

        while (left < right) {
            if (!isVowel(s[left])) {
                left++;
            } else if (!isVowel(s[right])) {
                right--;
            } else {
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        std::cout << s << std::endl;
    }

    return 0;
}
