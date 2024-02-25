#include <iostream>
#include <stack>
using namespace std;

int main() {
    int m;
    cin >> m;
    stack<int> Stack;
    stack<int> minStack;
    while (m--) {
        int op;
        cin >> op;

        if (op == 0) {
            int val;
            cin >> val;
            Stack.push(val);

            if (minStack.empty() || val <= minStack.top()) {
                minStack.push(val);
            }
        } else if (op == 1) {
            if (Stack.empty()) {
                cout << -1 << endl;
            } else {
                if (Stack.top() == minStack.top()) {
                    minStack.pop();
                }
                Stack.pop();
            }
        } else if (op == 2) {
            if (Stack.empty()) {
                cout << -2 << endl;
            } else {
                cout << minStack.top() << endl;
            }
        }
    }

    return 0;
}
