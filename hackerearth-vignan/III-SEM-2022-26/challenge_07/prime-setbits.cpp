#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;  // Number of test cases

    while (t--) {
        int N;
        std::cin >> N;  // Input N

        for (int i = 1; i <= N; i++) {
            int count = 0;
            int num = i;

            while (num > 0) {
                count += num & 1;
                num >>= 1;
            }

            bool isPrime = true;
            if (count <= 1) {
                isPrime = false;
            } else {
                for (int j = 2; j <= std::sqrt(count); j++) {
                    if (count % j == 0) {
                        isPrime = false;
                        break;
                    }
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
