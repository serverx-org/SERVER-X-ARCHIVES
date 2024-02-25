# <span style="color:#1AED59"> Q. **Train Time**</span>

Ram is working as a software developer at Infosys in Bangalore. The company declared summer holidays for a week, and he wants to visit his native place, Vijayanagaram. To travel from Bangalore to Vijayanagaram, there are N stations, inclusive of both cities. Each station is assigned a particular number, with Bangalore having the number 0, and Vijayanagaram having the number N-1.

The train will stop at K stations after departing from Bangalore (K<N-2). Now, calculate the time taken to complete his journey according to the given conditions. If the station number is odd, the train will stop for 3 minutes; if the station number is even, the train will stop for 6 minutes. The distance between two stations is the difference between the station numbers, and the time taken to complete one unit of distance is one minute.

## <span style="color:cyan"> **Logic Approach** </span>

1. Read the size of the array (N), K, and the elements of the array, and set Time = 0 initially.
2. If K equals zero, print N-1. Otherwise, traverse the array from the first element to the last element.
3. If the element is odd, add 6 to the time; otherwise, add 3.
4. Add the difference between the current element and the next element to the time variable.
5. Print the total time.

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```cpp
// PROBLEM: Train Time
// Author: Geetika Nahak

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k == 0) {
            int a;
            cin >> a;
            cout << n - 1 << endl;
        } else {
            int a[k + 1];
            int time = 0;
            for (int i = 0; i < k; i++) {
                cin >> a[i];
            }
            a[k] = n;
            for (int i = 0; i < k; i++) {
                if (a[i] % 2 == 0)
                    time += 6;
                else
                    time += 3;
                time += a[i + 1] - a[i];
            }
            cout << time - 1 << endl;
        }
    }
}
```