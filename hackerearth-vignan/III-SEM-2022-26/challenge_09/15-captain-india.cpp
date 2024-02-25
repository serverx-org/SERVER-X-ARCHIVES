#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N, M;
        cin >> N >> M;

        cout << ((M * 4 - (N - M)) >= (N * 2) ? "CAPTAIN INDIA" : "NOT TODAY") << endl;
    }

    return 0;
}
