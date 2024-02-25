#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        string feedback;
        cin >> feedback;

        int count = 0;
        for (char c : feedback) {
            count += (c == '1');
        }

        cout << (count > N / 2 ? "Hurray" : "Improve") << endl;
    }

    return 0;
}
