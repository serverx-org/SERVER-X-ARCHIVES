#include <bits/stdc++>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int cnt = 0;
        if (m == 0) {
            cout << n - 1 << endl;
        } else {
            cnt = n - 1;
            for (int i = 0; i < n; ++i) {
                if (a[i] % 2 == 0) {
                    cnt += 6;
                } else {
                    cnt += 3;
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
