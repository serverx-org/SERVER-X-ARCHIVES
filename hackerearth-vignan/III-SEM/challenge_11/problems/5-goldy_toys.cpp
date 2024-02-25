/*   GOLDY AND HER TOYS   */

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void arrangeToys(const vector<int>& toys) {
    map<int, int> toyCount;

    for (int toy : toys)
        toyCount[toy]++;

    vector<pair<int, int>> countList(toyCount.begin(), toyCount.end());
    sort(countList.begin(), countList.end(), [](const auto& a, const auto& b) {
        return (a.second == b.second) ? (a.first < b.first) : (a.second > b.second);
    });

    for (const auto& count : countList) {
        int size = count.first;
        int countValue = count.second;

        for (int i = 0; i < countValue; i++)
            cout << size << " ";
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];

    map<int, int> tc;

    for (int toy : t)
        tc[toy]++;

    vector<pair<int, int>> cl(tc.begin(), tc.end());
    sort(cl.begin(), cl.end(), [](const auto& a, const auto& b) {
        return (a.second == b.second) ? (a.first < b.first) : (a.second > b.second);
    });

    for (const auto& cnt : cl) {
        int res = cnt.first;
        int cntValue = cnt.second;

        for (int i = 0; i < cntValue; i++)
            cout << res << " ";
    }

    cout << endl;

    return 0;
}
