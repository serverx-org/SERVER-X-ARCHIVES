#include <iostream>
#include <string>
using namespace std;

int minimumDeletions(string s) {
    int cntA = 0, cntB = 0, ans = 1e5;
    for (auto i : s)
        cntA += i == 'a';
    ans = cntA;

    for (int i = 0; i < s.length(); i++) {
        cntB += s[i] == 'b';
        cntA -= s[i] == 'a';

        ans = min(ans, cntB + cntA);
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int result = minimumDeletions(s);
        cout << result << endl; // Output: 2
    }
    return 0;
}
