/*
 * Vignan Challenge 15 | NOV 05
 * Problem: Paris Trip
 * Approach: Using unordered maps
 * Gautam Ankoji
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> visited;
    for (int i = 0; i < n; i++) {
        int from, to;
        cin >> from >> to;
        if (visited.find(from) != visited.end()) {              /* condition*/
            cout << "YES" << endl;
            return 0;
        }
        visited[from] = 1;
        visited[to] = 1;
    }
    cout << "NO" << endl;
    return 0;
}
