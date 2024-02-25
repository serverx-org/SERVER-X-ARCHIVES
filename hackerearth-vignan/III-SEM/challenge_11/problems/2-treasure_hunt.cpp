/* TREASURE HUNT*/

#include <iostream>
#include <vector>

using namespace std;

bool ValidPath(vector<vector<int>>& matrix, int i, int j) {
    int n = matrix.size();
    if (i < 0 || i >= n || j < 0 || j >= n || matrix[i][j] != 0) {
        return false;
    }
    matrix[i][j] = -1;

    if (i == n - 1 && j == n - 1) {
        return true;
    }
    return ValidPath(matrix, i - 1, j) || ValidPath(matrix, i + 1, j) || ValidPath(matrix, i, j - 1) || ValidPath(matrix, i, j + 1);
}

bool canReachTreasure(vector<vector<int>>& matrix) {
    return ValidPath(matrix, 0, 0);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> matrix(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        if (canReachTreasure(matrix)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
