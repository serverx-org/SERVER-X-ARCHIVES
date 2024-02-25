# <span style="color:#1AED59"> Q. **Wifi Range**</span>

Eswar is a student at VIIT, and he went to college to work on a mini-project. However, due to the summer season, the rooms are not conducive to work. Consequently, he stepped out of the room to enjoy the cool air. Now, he has doubts about whether he is within the Wi-Fi range. Eswar wants to check whether the place where he is sitting is within the Wi-Fi range or not.

The Wi-Fi router always emits signals in a surrounding circular area. The router is consistently positioned at (0, 0), and the maximum range of the Wi-Fi signal extends to the position (x1, y1). Eswar's current location is denoted by the coordinates (x2, y2).

To help Eswar determine whether he is in range or not, you can calculate the distance between his current position and the Wi-Fi router's position. If this distance is less than or equal to the maximum range of the Wi-Fi signal, then Eswar is within the Wi-Fi range. Otherwise, he is outside the range. The distance between two points (x1, y1) and (x2, y2) can be calculated using the distance formula:

\[ \text{Distance} = \sqrt{(x2 - x1)^2 + (y2 - y1)^2} \]

So, in this context, if \(\sqrt{(x2 - 0)^2 + (y2 - 0)^2} \leq \sqrt{x1^2 + y1^2}\), then Eswar is within the Wi-Fi range.

## <span style="color:cyan"> **Logic Approach** </span>

The corrected logical approach is as follows:

1. Read the coordinates of the Wi-Fi router (x1, y1) and Eswar's position (x2, y2).
2. Calculate the radius \( r \) of the circle with center (0, 0) and maximum range position (x1, y1) using the formula \( r = \sqrt{x1^2 + y1^2} \).
3. Calculate the distance between the point (x2, y2) and the origin (0, 0) using the formula \( d = \sqrt{x2^2 + y2^2} \).
4. If \( r \geq d \), then Eswar is in the Wi-Fi range. Otherwise, he is not in the Wi-Fi range.

## <span style="color:#1AA1ED"> **Logic Implementation** </span>

```c
// PROBLEM: Wifi Range
// Author: Geetika Nahak

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        long long r = (x1 * x1) + (y1 * y1);
        long long d = (x2 * x2) + (y2 * y2);
        if (r >= d)
            printf("IN RANGE\n");
        else
            printf("NOT IN RANGE\n");
    }
}
```
