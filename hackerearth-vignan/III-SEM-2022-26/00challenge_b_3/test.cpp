#include <bits/stdc++.h>

using namespace std;

#define int long long

int phi(int n)
{

    int ans = n;

    for (int i = 2; i * i <= n; ++i)
    {

        if (n % i == 0)
        {

            ans /= i;

            ans *= (i - 1);

            while (n % i == 0)

            {

                n /= i;
            }
        }
    }

    if (n > 1)

    {

        ans /= n;

        ans *= (n - 1);
    }

    return ans;
}

int32_t main()

{

    int t, n;

    cin >> t;

    while (t--)

    {

        cin >> n;

        cout << phi(n) << endl;
    }
}