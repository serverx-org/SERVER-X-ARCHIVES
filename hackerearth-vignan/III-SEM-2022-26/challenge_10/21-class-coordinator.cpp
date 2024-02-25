#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x :a)
            cin >> x;
        sort(a.begin(), a.end());
        for (auto &x :a)
            cout << x << " ";
    }
}