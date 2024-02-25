# <span style="color:#1AED59"> Q. **Unusual Sort**</span>

One day, Ashish brought his new bike to college. His friend Salim wanted to go for a ride on his bike. As Ashish enjoys sorting, he asked Salim to solve a problem based on sorting in order to go on a ride.

Ashish assigned values 1, 2,... 26 to the alphabets a, b,... z respectively, and then he gave some character P. He wanted to update the values of all the remaining alphabets from P onwards accordingly.

For example, if he gives the character 'v', then v=1, w=2, x=3, y=4, z=5.

Now Salim has to sort in such a way that all the values of alphabets are in non-decreasing order. If the same value is obtained for two alphabets, then the one with the least ASCII value should be placed first.

For example, if the word given is "himalay" and 'm' is the character he wanted to update, then "aamily" is considered as the updated word.

Finally, he has to sort such updated words in chronological order and print them.

## <span style="color:cyan"> **Logic Approach** </span>

The logical approach for Linear search is as follows:

1. Read the size of the array and the elements of the array.
2. Read the strings and the character p
3. Sort each string satisfying the given conditions
4. Sort the String array 

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```cpp
// PROBLEM: Unusal Sort
// AUTHOR: Geetika Nahak

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
```
