// got correct

#include <iostream>
using namespace std;

void robinSchedular(int n, int bt[], int slice) {
    int wt[n] = {0}, tat[n];
    int rem_bt[n];
    for (int i = 0; i < n; i++) {
        rem_bt[i] = bt[i];
    }
    int t = 0;
    while (1) {
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (rem_bt[i] > 0) {
                flag = false;
                t += min(slice, rem_bt[i]);
                rem_bt[i] -= min(slice, rem_bt[i]);
                wt[i] = t - bt[i];
                if (rem_bt[i] == 0) {
                    tat[i] = t;
                }
            }
        }
        if (flag)
            break;
    }
    for (int i = 0; i < n; i++) {
        cout << "TASK" << i + 1 << " " << wt[i] << " " << tat[i] << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int burst_time[n];
        for (int i = 0; i < n; i++) {
            burst_time[i] = i + 1;
            cin >> burst_time[i];
        }
        int slice = 2;
        robinSchedular(n, burst_time, slice);
    }
    return 0;
}
