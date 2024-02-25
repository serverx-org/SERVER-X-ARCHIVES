/* Mr. Perfect*/

#include <bits/stdc++.h>
#include <vector>
#include <cmath>

using namespace std;

int minPerfectSquares(int n) {
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    return dp[n];
}

int main() {
    int N;
    cin >> N;

    int result = minPerfectSquares(N);
    cout << result << endl;

    return 0;
}
