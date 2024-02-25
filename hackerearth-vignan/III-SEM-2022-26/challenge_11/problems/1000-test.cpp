#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    std::string input;

    for (int i = 0; i < arr.size(); i++) {
        input += std::to_string(arr[i]);
    }

    std::cout << "Input string: " << input << std::endl;

    return 0;
}
