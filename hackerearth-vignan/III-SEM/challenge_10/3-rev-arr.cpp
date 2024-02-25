#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        std::reverse(arr.begin(), arr.end());

        for (int val : arr) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
