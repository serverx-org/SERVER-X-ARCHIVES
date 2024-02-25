#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;

        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        std::cout << (s == "ronaldo" ? "YES" : "NO") << std::endl;
    }

    return 0;
}
