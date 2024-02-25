// got correct

#include<iostream>
using namespace std;

void findavgTime(int n, int bt[], int slice) {
    int wt = 0, tat = 0;
    for (int i = 0; i < n; i++) {
        wt += i > 0 ? bt[i - 1] : 0;
        tat = bt[i] + wt;
        cout << wt << " " << tat << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int bt[n];
        for (int i = 0; i < n; i++) {
            bt[i] = i + 1;
            cin >> bt[i];
        }
        findavgTime(n, bt, 2);
    }
    return 0;
}
