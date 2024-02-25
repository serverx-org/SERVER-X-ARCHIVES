#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int A, B, C, D;
        std::cin >> A >> B >> C >> D;

        int skyScore = A * 4 + B * 6;
        int abdScore = C * 4 + D * 6;

        std::cout << (skyScore > abdScore ? "SKY" : (abdScore > skyScore ? "ABD" : "DRAW")) << std::endl;
    }

    return 0;
}
