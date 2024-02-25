/*   OMG STAIRS???   */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void printStairPattern(int n, const vector<int>& stairs) {
    for (int i = 0; i < n; i++) {
        string spaces(i + i, ' ');
        cout << spaces << stairs[i] << endl;
        if (i != n - 1) {
            string stairSpaces(i + i + 1, ' ');
            cout << stairSpaces << "|" << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> stairs(n);
    for (int i = 0; i < n; i++) {
        cin >> stairs[i];
    }
    sort(stairs.begin(), stairs.end());
    reverse(stairs.begin(), stairs.end());
    printStairPattern(n, stairs);

    return 0;
}


/*
5
 |
  4
   |
    3
     |
      2
       |
        1
*/