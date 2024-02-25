#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int N;
        std::cin >> N;

        for (int i = 1; i <= N; i++) {
            int count = __builtin_popcount(i);
            bool isPrime = count > 1;

            for (int j = 2; j <= std::sqrt(count); j++) {
                if (count % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                std::cout << i << " ";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
