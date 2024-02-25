#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k == 0) {
            int a;
            cin >> a;
            cout << n - 1 << endl;
        } else {
            int a[k + 1];
            int time = 0;
            for (int i = 0; i < k; i++) {
                cin >> a[i];
            }
            a[k] = n;
            for (int i = 0; i < k; i++) {
                if (a[i] % 2 == 0)
                    time += 6;
                else
                    time += 3;
                time += a[i + 1] - a[i];
            }
            cout << time - 1 << endl;
        }
    }
}