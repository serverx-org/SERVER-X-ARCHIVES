#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr1(n);
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }

        vector<int> arr2(n);
        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
        }

        unordered_set<int> set1(arr1.begin(), arr1.end());
        vector<int> commonIntegers;

        for (int i = 0; i < n; i++) {
            if (set1.find(arr2[i]) != set1.end()) {
                commonIntegers.push_back(arr2[i]);
                set1.erase(arr2[i]); // Remove the found element to avoid duplicates
            }
        }

        sort(commonIntegers.begin(), commonIntegers.end());

        for (int i = 0; i < commonIntegers.size(); i++) {
            cout << commonIntegers[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
