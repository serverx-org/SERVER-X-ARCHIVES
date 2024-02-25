#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string toss;
        cin >> toss;

        int count_ones = 0, count_zeroes = 0;
        for (char c : toss)
            (c == '1') ? count_ones++ : count_zeroes++;

        cout << (count_ones > count_zeroes ? "Chicken" : (count_ones == count_zeroes ? "Both" : "Mutton")) << endl;
    }

    return 0;
}
