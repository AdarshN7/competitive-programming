#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int M = 1000000007;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
LL modex(LL b, LL e)
{
    LL c = 1;
    while (e > 0)
    {
        if (e & 1)
            c *= b % M;
        e >>= 1;
        b *= b % M;
    }
    return c;
}
int32_t main()
{
    FLASH;
    LL t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << modex((modex(2, n) - 1), m) % M << "\n";
    }
}