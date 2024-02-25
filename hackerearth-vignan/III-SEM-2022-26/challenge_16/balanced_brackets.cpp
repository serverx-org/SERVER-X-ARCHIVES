// got correct

#include <iostream>
#include <stack>
using namespace std;

bool areBracketsBalanced(string expr) {
    stack<char> s;
    for (char c : expr) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        } else {
            if (s.empty() || (c == ')' && s.top() != '(') || (c == '}' && s.top() != '{') || (c == ']' && s.top() != '[')) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string expr;
        cin >> expr;
        cout << (areBracketsBalanced(expr) ? "YES" : "NO") << endl;
    }
    return 0;
}
