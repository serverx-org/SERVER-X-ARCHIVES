#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int year;
        cin >> year;

        while (true) {
            int digits[10] = { 0 };
            if (++year % 10 == 0) year++; // Avoid ending with 0

            int temp = year;
            while (temp > 0 && digits[temp % 10]++ == 0) {
                temp /= 10;
            }

            if (temp == 0) break;
        }

        cout << year << endl;
    }

    return 0;
}
