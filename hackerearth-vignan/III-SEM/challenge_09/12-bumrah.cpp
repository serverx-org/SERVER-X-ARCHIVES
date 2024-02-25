#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum = 0;
        cin >> n;
        for (int i = 0, num; i < n && cin >> num; sum += num, i++);
        cout << sum << endl;
    }

    return 0;
}
