/*   GANESH CHANDA   */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

struct Group {
    int groupNo;
    int totalMoney;
};

bool sortByGroup(const Group& g1, const Group& g2) {
    return g1.groupNo < g2.groupNo;
}

int main() {
    unordered_map<int, int> d;
    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        d[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int groupNo, donation;
        cin >> groupNo >> donation;
        d[groupNo] += donation;
    }

    vector<Group> groups;
    for (const auto& entry : d) {
        Group group;
        group.groupNo = entry.first;
        group.totalMoney = entry.second;
        groups.push_back(group);
    }

    sort(groups.begin(), groups.end(), sortByGroup);

    for (const auto& group : groups) {
        cout << group.groupNo << " " << group.totalMoney << endl;
    }

    return 0;
}
