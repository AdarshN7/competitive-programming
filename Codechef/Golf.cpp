#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
int32_t main()
{
    FLASH;
    LL t;
    cin >> t;
    while (t--)
    {
        LL n, x, k;
        cin >> n >> x >> k;
        cout << ((x % k == 0 || (n + 1 - x) % k == 0) ? "YES" : "NO") << "\n";
    }
}