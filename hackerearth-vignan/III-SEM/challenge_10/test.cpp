#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            std::cin >> b[i];
        }

        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());

        std::vector<int> commonElements;
        std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(commonElements));

        for (int i = 0; i < commonElements.size(); i++) {
            std::cout << commonElements[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
