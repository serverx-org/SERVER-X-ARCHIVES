/* PALINDROMIC*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        unordered_map<int, int> frequency;

        for (int i = 0; i < n; i++) {
            frequency[arr[i]]++;
        }

        int oddCount = 0;

        for (auto it = frequency.begin(); it != frequency.end(); it++) {
            if (it->second % 2 != 0) {
                oddCount++;
            }
        }

        if (oddCount <= 1) {
            cout << "palindromic" << endl;
        } else {
            cout << "not palindromic" << endl;
        }
    }

    return 0;
}
