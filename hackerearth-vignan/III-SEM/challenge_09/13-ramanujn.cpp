#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int count = 0;
        for (int m = 1; m <= n; m++) {
            if (n % m <= n / 2) {
                count++;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
