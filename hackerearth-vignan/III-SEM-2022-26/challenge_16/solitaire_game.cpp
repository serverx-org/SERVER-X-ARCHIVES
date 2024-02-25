// got correct

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    priority_queue<int> pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);
    int res = 0;
    while (pq.size() > 1) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        if (x - 1 > 0)
            pq.push(x - 1);
        if (y - 1 > 0)
            pq.push(y - 1);
        res += 1;
    }
    cout << res << endl;
    return 0;
}
