#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000000;
int arr[MAX + 1];
void SieveOfEratosthenes()
{
    bool prime[MAX + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= MAX; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= MAX; i += p)
                prime[i] = false;
        }
    }
    arr[0] = 0;
    arr[1] = 0;
    for (int p = 2; p <= MAX; p++)
    {
        arr[p] = arr[p - 1];
        if (prime[p])
            arr[p]++;
    }
}
int count(int L, int R)
{
    return arr[R] - arr[L - 1];
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int t, x, y;
    cin >> t;
    SieveOfEratosthenes();
    while (t--)
    {
        cin >> x >> y;
        cout << ((count(1,x) > y) ? "Divyam" : "Chef") << "\n";
    }
    return 0;
}