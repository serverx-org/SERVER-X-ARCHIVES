/*
 * Vignan Challenge 15 | NOV 05
 * Problem: Lable Box
 * Approach: Using frequency arrays
 * Gautam Ankoji
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> numbers(n);
        vector<int> count(n + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
            count[numbers[i]]++;
        }
        int repeated = 0, missing = 0;
        for (int i = 1; i <= n; i++) {
            if (count[i] == 2) {
                repeated = i;
            } else if (count[i] == 0) {
                missing = i;
            }
        }
        cout << repeated << " " << missing << endl;          /* required result*/
    }
    return 0;
}





















/*

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> numbers(n);
        vector<int> count(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
            count[numbers[i]]++;
        }

        int repeated, missing;
        for (int i = 1; i <= n; i++) {
            if (count[i] == 2) {
                repeated = i;
            } else if (count[i] == 0) {
                missing = i;
            }
        }

        cout << repeated << " " << missing << endl;
    }

    return 0;
}

*/