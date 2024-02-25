/*
 * Vignan Challenge 15 | NOV 05
 * Problem: Grid Tiles
 * Approach: Using Dynamic Programming
 * Gautam Ankoji
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e9;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > tiles(n, vector<int>(m));
    vector<vector<int> > dp(n, vector<int>(m, MAX));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tiles[i][j];
        }
    }
    dp[n - 1][m - 1] = tiles[n - 1][m - 1];
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            if (i < n - 1) {
                dp[i][j] = min(dp[i][j], tiles[i][j] + dp[i + 1][j]);
            }
            if (j < m - 1) {
                dp[i][j] = min(dp[i][j], tiles[i][j] + dp[i][j + 1]);       /*final cost  */
            }
        }
    }
    cout << dp[0][0] << endl;
    return 0;
}
