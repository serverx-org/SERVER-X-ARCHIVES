/*
 * Vignan Challenge 15 | NOV 05
 * Problem: Nokia Mobile
 * Approach: Using Queues
 * Gautam Ankoji
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    vector<string> digit_to_chars = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int n;
        cin >> n;
        string str;
        cin >> str;
        queue<string> info;
        info.push("");
        while (!info.empty()) {
            string current = info.front();
            info.pop();
            if (current.length() == str.length()) {
                cout << current << " ";
            } else {
                int index = current.length();
                int digit = str[index] - '2';
                for (char c : digit_to_chars[digit]) {
                    info.push(current + c);
                }
            }
        }
        cout << endl;
    }
    return 0;
}














/*

// Define a mapping from digits to corresponding characters
const vector<string> digit_to_chars = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// Function to generate all possible info for a given string
void generateMessages(const string& str, string current, int index) {
    if (index == str.size()) {
        cout << current << " ";
        return;
    }

    int digit = str[index] - '2'; // Convert the character to an index
    for (char c : digit_to_chars[digit]) {
        generateMessages(str, current + c, index + 1);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        generateMessages(str, "", 0);
        cout << endl;
    }

    return 0;
}

*/