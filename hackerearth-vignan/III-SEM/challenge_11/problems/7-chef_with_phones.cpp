/*   CHEF WITH PHONES   */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int cnt12 = count(arr.begin(), arr.end(), 12);
        int cnt48 = count(arr.begin(), arr.end(), 48);   

        if (cnt12 == cnt48) {
            cout << "equal" << endl;
        } else if (cnt12 > cnt48) {
            cout << "iphone13" << endl;
        } else {
            cout << "iphone14" << endl;
        }
    }

    return 0;
}
