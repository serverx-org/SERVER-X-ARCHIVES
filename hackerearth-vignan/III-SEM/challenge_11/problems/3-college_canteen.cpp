/* COLLEGE CANTEEN */

#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int m, c, k;
        std::cin >> m >> c >> k;

        int choco = m / c;
        int wraps = choco;

        while (wraps >= k)
            choco += (wraps / k), wraps = (wraps / k) + (wraps % k);

        std::cout << choco << std::endl;
    }

    return 0;
}