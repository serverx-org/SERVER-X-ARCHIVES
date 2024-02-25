// got wrong

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Process {
    int task, bt, p;
};

bool compare(const Process &a, const Process &b) {
    return a.p > b.p;
}

void priorityProcess(const vector<Process> &processes) {
    vector<int> wt(processes.size(), 0), tat(processes.size(), 0);
    for (int i = 1; i < processes.size(); i++)
        wt[i] = processes[i - 1].bt + wt[i - 1];
    for (int i = 0; i < processes.size(); i++)
        tat[i] = processes[i].bt + wt[i];
    for (const auto &p : processes)
        cout << "TASK" << p.task << " " << wt[p.task - 1] << " " << tat[p.task - 1] << endl;
}

void scheduling(vector<Process> &processes) {
    sort(processes.begin(), processes.end(), compare);
    priorityProcess(processes);
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<Process> processes(n);
        for (int i = 0; i < n; i++)
            processes[i].task = i + 1, cin >> processes[i].bt >> processes[i].p;
        scheduling(processes);
    }
    return 0;
}
