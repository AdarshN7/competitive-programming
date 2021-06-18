#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MAX = 1000000005;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
int32_t main()
{
    FLASH;
    int t;
    cin >> t;
    ll n, e, h, a, b, c, total, m;
    while (t--)
    {
        total = 0;
        cin >> n >> e >> h >> a >> b >> c;
        while (n >= 0)
        {
            m = min(a, min(b, c));
            if (m == a)
            {
                total += a * (e / 2);
                n -= (e / 2);
                e %= 2;
                a = INT32_MAX;
            }
            else if (m == b)
            {
                total += b * (h / 3);
                n -= (h / 3);
                h %= 3;
                b = INT32_MAX;
            }
            else if (m == c)
            {
                total += c * (min(h, e));
                n -= min(h, e);
                e -= min(h, e);
                h -= min(h, e);
                c = INT32_MAX;
            }
        }

        cout << total << "\n";
    }
}