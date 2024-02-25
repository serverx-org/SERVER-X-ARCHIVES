#include <iostream>
using namespace std;

int main() {
    int rows;
    
    cout << "Enter the number of rows for the upside-down hollow triangle pattern: ";
    cin >> rows;
    
    for (int i = rows; i >= 1; i--) {
        cout << string(rows - i, ' '); // Print spaces before each row
        
        cout << '*'; // Print a star at the beginning of each row
        
        if (i != 1) {
            cout << string((i - 2) * 2 + 1, ' '); // Print spaces inside each row
            cout << '*'; // Print a star at the end of each row
        }
        
        cout << endl; // Move to the next line
    }
    
    return 0;
}
