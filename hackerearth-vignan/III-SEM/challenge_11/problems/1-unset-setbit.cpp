#define main1
#define main2

#ifdef main1
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        unsigned int n;
        cin >> n;
        if(n == 0) {
            cout << 0 << "\n";
        } else {
            unsigned int p = __builtin_ctz(n);
            unsigned res = n & ~(1u << p);
            cout << res << "\n";
        }
    }
}
#endif

#ifdef main2
/* UNSET THE SETBIT*/
#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        unsigned int n;
        std::cin >> n;

        unsigned int res = n & (n - 1);
        std::cout << res << "\n";
    }

    return 0;
}

#endif