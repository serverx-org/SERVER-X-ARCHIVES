#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

string infixToPrefix(string infix) {
    reverse(infix.begin(), infix.end());
    for (char &c : infix) {
        if (c == '(')
            c = ')';
        else if (c == ')')
            c = '(';
    }
    stack<char> operators;
    string prefix;
    for (char c : infix) {
        if (isalnum(c)) {
            prefix += c;
        } else if (c == '(') {
            operators.push(c);
        } else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                prefix += operators.top();
                operators.pop();
            }
            operators.pop();
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                prefix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }
    while (!operators.empty()) {
        prefix += operators.top();
        operators.pop();
    }
    reverse(prefix.begin(), prefix.end());
    return prefix;
}

int main() {
    string infix_expression;
    cin >> infix_expression;
    string prefix_expression = infixToPrefix(infix_expression);
    cout << prefix_expression << endl;
    return 0;
}
