#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int B, C;
        cin >> B >> C;

        int A = B ^ C;
        cout << A << endl;
    }

    return 0;
}
