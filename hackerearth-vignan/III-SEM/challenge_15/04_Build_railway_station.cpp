/*
 * Vignan Challenge 15 | NOV 05
 * Problem: Build Railway Station
 * Approach: Using Brute Force Method
 * Gautam Ankoji
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, char>> time;
    for (int i = 0; i < n; i++) {
        int arrival, departure;
        cin >> arrival >> departure;
        time.push_back(make_pair(arrival, 'a'));
        time.push_back(make_pair(departure, 'd'));
    }
    sort(time.begin(), time.end());
    int platforms = 0, maxPlatforms = 0;
    for (auto x : time) {
        if (x.second == 'a') {
            platforms++;
            maxPlatforms = max(maxPlatforms, platforms);                   /* final result*/
        } else {
            platforms--;
        }
    }
    cout << maxPlatforms << endl;
    return 0;
}
