// got partially correct

#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

struct Process {
    int task, bt, at;
};

void SRTF_Schedular(vector<Process> &processes, int n) {
    vector<int> wt(n), tat(n), rt(n);

    for (int i = 0; i < n; i++) {
        rt[i] = processes[i].bt;
    }
    int complete = 0, tt = 0;
    while (complete != n) {
        int shortest = -1, minMax = INT_MAX;
        for (int j = 0; j < n; j++) {
            if (processes[j].at <= tt && rt[j] < minMax && rt[j] > 0) {
                minMax = rt[j];
                shortest = j;
            }
        }
        if (shortest == -1) {
            tt++;
            continue;
        }
        rt[shortest]--;
        if (rt[shortest] == 0) {
            complete++;
            int finish_time = tt + 1;
            wt[shortest] = finish_time - processes[shortest].bt - processes[shortest].at;
            wt[shortest] = max(wt[shortest], 0);
        }
        tt++;
    }

    for (int i = 0; i < n; i++) {
        tat[i] = processes[i].bt + wt[i];
        cout << "TASK" << processes[i].task << " " << wt[i] << " " << tat[i] << endl;
    }
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<Process> processes(n);
        for (int i = 0; i < n; i++) {
            processes[i].task = i + 1;
            cin >> processes[i].bt;
        }
        for (int i = 0; i < n; i++) {
            cin >> processes[i].at;
        }
        SRTF_Schedular(processes, n);
    }
    return 0;
}
