#include <iostream>
#include <string>
#include <algorithm>

std::string cipher(const std::string& m, const std::string& k) {
    std::string res;

    for (char c : m) {
        if (std::isalpha(c)) {
            char replaced = std::tolower(c);
            replaced = std::isupper(c) ? std::toupper(k[replaced - 'a']) : k[replaced - 'a'];
            res.push_back(replaced);
        } else {
            res.push_back(c);
        }
    }

    return res;
}

int main() {
    std::string m;
    std::string k;

    std::getline(std::cin, m);
    std::getline(std::cin, k);

    std::cout << cipher(m, k) << std::endl;

    return 0;
}
