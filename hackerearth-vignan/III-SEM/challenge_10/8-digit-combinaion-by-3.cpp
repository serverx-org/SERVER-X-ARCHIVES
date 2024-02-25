#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> arr(n);
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
            sum += arr[i] % 10;
        }

        std::cout << (sum % 3 == 0 ? "YES" : "NO") << std::endl;
    }

    return 0;
}
