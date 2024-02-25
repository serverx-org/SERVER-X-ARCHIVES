#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    for (int test = 0; test < t; test++) {
        int n;
        std::cin >> n;

        std::vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            std::cin >> b[i];
        }

        std::vector<int> result;
        int i = 0, j = 0;

        while (i < n && j < n) {
            if (a[i] == b[j]) {
                result.push_back(a[i]);
                i++;
                j++;
            } else if (a[i] < b[j]) {
                i++;
            } else {
                j++;
            }
        }

        std::sort(result.begin(), result.end());

        // Print the unique elements from the result
        auto last = std::unique(result.begin(), result.end());
        result.erase(last, result.end());

        for (int i = 0; i < result.size(); i++) {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
