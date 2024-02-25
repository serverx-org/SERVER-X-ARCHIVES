#include <iostream>
#include <string>
using namespace std;

string makeGood(string s) {
    string result;
    for (char c : s) {
        if (!result.empty() && abs(result.back() - c) == 32) {
            result.pop_back();
        } else {
            result.push_back(c);
        }
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    string result = makeGood(s);
    cout << result << endl; // Output: "D"
    return 0;
}
