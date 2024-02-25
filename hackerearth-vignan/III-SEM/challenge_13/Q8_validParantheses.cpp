#include <iostream>
#include <stack>

bool isValid(std::string s) {
    if (s.size() % 2)
        return false;

    std::stack<char> open, close;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            open.push(s[i]);
        if (!open.empty() &&
            ((s[i] == ')' && open.top() == '(') ||
             (s[i] == '}' && open.top() == '{') ||
             (s[i] == ']' && open.top() == '[')))
            close.push(s[i]), open.pop();
    }
    if (close.size() * 2 == s.size())
        return true;
    return false;
}

int main() {
    std::string input;
    std::cin >> input;

    if (isValid(input)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    std::cout << (isValid(input) ? "YES" : "NO") << std::endl;

    return 0;
}
