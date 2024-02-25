#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n, x;
        cin >> n >> x; // size of array and target number

        unordered_map<int, int> freqMap;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num; // input array element
            freqMap[num]++;
        }

        cout << freqMap[x] << endl; // output frequency of the target number
    }

    return 0;
}
