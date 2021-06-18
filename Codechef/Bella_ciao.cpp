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
    int t;
    cin >> t;
    while (t--)
    {
        LL n, d, p, q, sum = 0;
        cin >> n >> d >> p >> q;
        sum = n * p + q * (d * (n / d) * (n / d - 1) / 2 + (n % d) * (n / d));
        cout << sum << "\n";
    }
}