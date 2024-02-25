#include <bits/stdc++.h>
using namespace std;

string sortit(string s, char p) {
    vector<int> a, b;
    char cha[26];
    for (int i = 0; i < 26; i++) {
        cha[i] = char('a' + i);
    }
    int y = 0;
    for (y = 0; 'z' - p + y + 1 < 26; y++) {
        a.push_back(y + 1);
    }
    int k = 0;
    for (int i = y; i < 26; i++) {
        a.push_back(k++);
    }
    unordered_map<char, int> m;
    for (int i = 0; i < 26; i++) {
        m[cha[i]] = a[i];
    }
    for (int i = 0; i < s.length(); i++) {
        for (int j = i + 1; j < s.length(); j++) {
            if (m[s[i]] >= m[s[j]])
                swap(s[i], s[j]);
        }
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    char p;
    cin >> p;
    for (int i = 0; i < n; i++) {
        s[i] = sortit(s[i], p);
    }
    sort(s, s + n);
    for (int i = 0; i < n; i++) {
        cout << s[i] << endl;
    }
}