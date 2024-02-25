#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string findDictionaryOrder(string str, int k) {
    for (int i = str.length() - 1; i >= 0; i--) {
        if (k == 0) {
            break;
        }
        if (str[i] != 'a') {
            if (k >= 'z' - str[i] + 1) {
                k -= ('z' - str[i] + 1);
                str[i] = 'a';
            } else {
                str[i] += k;
                k = 0;
            }
        }
    }
    return str;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        int n, k;
        cin >> n >> k;
        cin.ignore();
        string str;
        getline(cin, str);
        string result = findDictionaryOrder(str, k);
        cout << result << endl;
    }

    return 0;
}
