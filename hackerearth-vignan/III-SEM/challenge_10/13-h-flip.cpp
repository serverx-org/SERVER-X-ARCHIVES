#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));

        for (auto &row : matrix) {
            for (auto &elem : row) {
                cin >> elem;
            }
        }

        for (auto &row : matrix) {
            for (auto it = row.rbegin(); it != row.rend(); ++it) {
                cout << *it << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}
