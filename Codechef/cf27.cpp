#include <bits/stdc++.h>
using namespace std;
const int mod = 998;
typedef long long ll;
int FindXorSum(int arr[], int m, int n)
{
    if (n < m)
        return 0;
    int x[n] = {0};
    int result = 0;
    for (int k = 1; k <= m; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i > 0)
                x[i] = x[i - 1] ^ arr[i];
            else
                x[i] = arr[i];
            if (i >= k - 1)
            {
                int sum = 0;
                sum = x[i];
                if (i - k > -1)
                    sum ^= x[i - k];
                result += sum;
            }
        }
    }
    return result;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[] = {1, 3, 5, 2};

    int n = 4, k = 2;

    cout << FindXorSum(arr, k, n) << endl;

    return 0;
}