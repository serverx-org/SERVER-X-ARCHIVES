#include <iostream>
#include <unordered_map>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::unordered_map<int, int> frequency;

        for (int i = 0; i < n; i++) {
            int num;
            std::cin >> num;
            frequency[num]++;
        }

        int oddCount = 0;

        for (const auto& pair : frequency) {
            if (pair.second % 2 != 0) {
                oddCount++;
            }
        }

        std::cout << (oddCount <= 1 ? "palindromic" : "not palindromic") << std::endl;
    }

    return 0;
}
