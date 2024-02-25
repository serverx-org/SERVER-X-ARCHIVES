#include <iostream>
#include <stack>
#include <string>

using namespace std;

string removeStars(const string &s) {
    stack<char> nonStarStack;
    for (char c : s) {
        if (c == '*') {
            if (!nonStarStack.empty()) {
                nonStarStack.pop();
            }
        } else {
            nonStarStack.push(c);
        }
    }
    string result = "";
    while (!nonStarStack.empty()) {
        result = nonStarStack.top() + result;
        nonStarStack.pop();
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        string s;
        cin >> s;
        string result = removeStars(s);
        cout << result << endl;
    }

    return 0;
}

// #include <iostream>
// #include <stack>
// using namespace std;

// void removeStars1(int n, char a[]) {
//     stack<char> s;
//     for(int i = 0; i < n; i++) {
//         if (a[i] != '*') {
//             s.push(a[i]);
//         } else if (!s.empty()) {
//             s.pop();
//         }
//     }

//     stack<char> revArr;
//     while(!s.empty()) {
//         revArr.push(s.top());
//         s.pop();
//     }

//     while(!revArr.empty()) {
//         cout << revArr.top();
//         revArr.pop();
//     }
//     cout << endl;
// }

// int main() {
//     int T;
//     cin >> T;
//     for (int t = 0; t < T; t++) {
//         string s;
//         cin >> s;
//         int n = s.length();
//         char a[n];
//         for (int i = 0; i < n; i++) {
//             a[i] = s[i];
//         }
//         removeStars1(n, a);
//     }

//     return 0;
// }
