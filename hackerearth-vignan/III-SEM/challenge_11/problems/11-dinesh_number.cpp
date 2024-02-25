/*   DINESH AND HIS NUMBER   */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string number;
        int k;
        cin >> number >> k;

        string result;
        for (char digit : number) {
            while (k > 0 && !result.empty() && result.back() > digit) {
                result.pop_back();
                --k;
            }
            result.push_back(digit);
        }
        result.resize(result.length() - k);
        string smallestNumber = result;
        cout << smallestNumber << endl;
    }

    return 0;
}
