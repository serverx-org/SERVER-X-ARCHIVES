/*	4G ARRAY	*/

#include <iostream>
#include <vector>
using namespace std;

int array4G(int arr[], int n)
{
	int count = 0;
	int modulus[4] = { 0 };
	int sum = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		int mod = arr[i] % 4;
		sum += mod;
		modulus[mod]++;
	}
	if (sum % 4 != 0)
	{
		return -1;
	}
	else
	{
		if (modulus[1] > modulus[3])
		{
			count += modulus[3];
		}
		else
		{
			count += modulus[1];
		}
		modulus[1] -= count;
		modulus[3] -= count;
		modulus[2] += modulus[1] / 2;
		modulus[2] += modulus[3] / 2;

		count += modulus[1] / 2;
		count += modulus[3] / 2;
		count += modulus[2] / 2;

		return count;
	}
}
// https://www.geeksforgeeks.org/minimum-steps-to-make-all-the-elements-of-the-array-divisible-by-4/
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int count = array4G(arr, n);

        cout << count << "\n";
    }
}