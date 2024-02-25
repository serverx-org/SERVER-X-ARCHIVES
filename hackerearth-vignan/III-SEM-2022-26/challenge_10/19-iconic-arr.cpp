#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;

        for (int i = 1; i <= n; i++) {
            int num;
            cin >> num;
            if (num == i) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}   