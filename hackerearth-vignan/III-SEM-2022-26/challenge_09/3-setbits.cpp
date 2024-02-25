// #include <iostream>

// using namespace std;

// int main() {
//     int t;
//     cin >> t; // number of test cases

//     while (t--) {
//         int n;
//         cin >> n; // input number

//         int setBits = 0;
//         while (n != 0) {
//             setBits += n & 1; // Check if the least significant bit is set
//             n >>= 1; // Right shift to discard the least significant bit
//         }

//         cout << setBits << endl;
//     }

//     return 0;
// }


#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n; // input number

        int setBits = __builtin_popcount(n);
        cout << setBits << endl;
    }

    return 0;
}

