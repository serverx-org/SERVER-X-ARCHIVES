#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int year;
        cin >> year;

        bool distinctDigitsFound = false;

        while (!distinctDigitsFound) {
            year++;

            int digits[10] = { 0 };
            int temp = year;

            while (temp > 0) {
                int digit = temp % 10;

                if (digits[digit] > 0) {
                    break;
                }

                digits[digit]++;
                temp /= 10;
            }

            if (temp == 0) {
                distinctDigitsFound = true;
            }
        }

        cout << year << endl;
    }

    return 0;
}
