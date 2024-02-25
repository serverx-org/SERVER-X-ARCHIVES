#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        vector<int> bids(N);
        for (int i = 0; i < N; i++)
            cin >> bids[i];

        auto maxBid = max_element(bids.begin(), bids.end());
        cout << distance(bids.begin(), maxBid) << endl;
    }

    return 0;
}
