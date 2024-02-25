#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        int evenPower = 0, oddPower = 0;

        for (int i = 0, num; i < N; i++) {
            cin >> num;

            if (num % 2 == 0) {
                evenPower += i;
            } else {
                oddPower += i;
            }
        }

        cout << ((evenPower > oddPower) ? "Even" : (oddPower > evenPower) ? "Odd" : "Even Odd") << endl;
    }

    return 0;
}
