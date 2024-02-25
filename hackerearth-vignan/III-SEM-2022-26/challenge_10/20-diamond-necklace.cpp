#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N, X;
        cin >> N >> X;

        int sum = 0;
        for (int i = 0; i < N; i++) {
            int amount;
            cin >> amount;
            sum += amount;
        }

        cout << (sum >= X ? "YES" : "NO") << endl;
    }

    return 0;
}
