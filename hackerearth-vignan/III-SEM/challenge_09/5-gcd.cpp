#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int a, b;
        cin >> a >> b; // input numbers

        int result = gcd(a, b);

        cout << result << endl;
    }

    return 0;
}
