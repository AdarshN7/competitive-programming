#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;
int M = 1000000007;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
int32_t main()
{
    FLASH;
    LL n, sum = 0, j = 0;
    cin >> n;
    vector<LL> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (auto x : v)
        sum += (pow(x, 3));
    for (auto x : v)
        j += x;
    for (auto x : v)
        sum += j * x;
    cout << sum % M;
}