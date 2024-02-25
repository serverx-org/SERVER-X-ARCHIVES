#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;

        std::cout << ((a == 60 && b == 60 && c == 60) ? "YES" : "NO") << std::endl;
    }

    return 0;
}
