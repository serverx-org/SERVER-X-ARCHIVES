#include <iostream>
using namespace std;

int last_remaining_chocolate(int n) {
    // Alternate approach to finding the last remaining chocolate
    // The final position depends on the parity of the total number of chocolates
    // If n is even, the last remaining chocolate will be at index n/2
    // If n is odd, the last remaining chocolate will be at index n/2
    return n % 2 == 0 ? n / 2 : (n + 1) / 2;
}

int main() {
    int n = 10;
    cout << last_remaining_chocolate(n) << endl;
    return 0;
}
