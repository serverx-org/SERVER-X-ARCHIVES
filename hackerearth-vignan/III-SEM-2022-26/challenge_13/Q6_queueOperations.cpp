#include <iostream>
#include <queue>
using namespace std;

int main() {
    int m;
    cin >> m;
    queue<int> q;
    for (int i = 0; i < m; ++i) {
        int opration;
        cin >> opration;
        if (opration == 1) {
            int val;
            cin >> val;
            q.push(val);
        } else if (opration == 2) {
            if (!q.empty()) {
                q.pop();
            } else {
                cout << -1 << endl;
            }
        } else if (opration == 3) {
            if (!q.empty()) {
                cout << q.front() << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
