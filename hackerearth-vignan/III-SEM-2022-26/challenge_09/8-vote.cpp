#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int age;
        cin >> age;

        cout << (age >= 18 ? "YES" : "NO") << endl;
    }

    return 0;
}
