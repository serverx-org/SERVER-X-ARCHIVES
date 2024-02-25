#include <iostream>
#include <stack>
#include <string>

using namespace std;

string removeStars(const string& s) {
    stack<char> nonStarStack;
    for (char c : s) {
        if (c == '*' && !nonStarStack.empty()) {
            nonStarStack.pop();
        } else if (c != '*') {
            nonStarStack.push(c);
        }
    }
    string result;
    while (!nonStarStack.empty()) {
        result = nonStarStack.top() + result;
        nonStarStack.pop();
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << removeStars(s) << endl;
    }
    return 0;
}
