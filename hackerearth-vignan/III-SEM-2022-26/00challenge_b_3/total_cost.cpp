#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> chocolatePrices{
        {"Perk", 10},
        {"5star", 20},
        {"Dairymilk", 15},
        {"Chocos", 30},
        {"Bourniville", 145},
        {"kitkat", 60}
    };

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int totalPrice = 0;

        for (int i = 0; i < n; i++) {
            string variety;
            int quantity;
            cin >> variety >> quantity;

            totalPrice += chocolatePrices[variety] * quantity;
        }

        cout << totalPrice << endl;
    }

    return 0;
}
