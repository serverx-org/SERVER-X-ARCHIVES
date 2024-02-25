/*  NO. OF CIRCULAR PRIME NUMBERS   */

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int start, end;
    cin >> start >> end;
    int count = 0;
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            string numStr = to_string(num);
            bool allRotationsPrime = true;
            for (int i = 0; i < numStr.length(); i++) {
                string rotationStr = numStr.substr(i) + numStr.substr(0, i);
                int rotation = stoi(rotationStr);
                if (!isPrime(rotation)) {
                    allRotationsPrime = false;
                    break;
                }
            }
            if (allRotationsPrime)
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
