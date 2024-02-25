/*   COMPLEMENTING NUMBER   */

#include <iostream>
using namespace std;

int complement(int num) {
    int mask = 1;
    while (mask < num) {
        mask = (mask << 1) + 1;
    }
    return num ^ mask;
}

int main() {
    int n;
    cin >> n;

    cout  << complement(n) << endl;

    return 0;
}
