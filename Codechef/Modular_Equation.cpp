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
        LL n, m, count = 0;
        cin >> n >> m;
        vector<LL> v(n + 1, 1);
        for (LL a = 2; a <= n; a++)
        {
            LL y = m % a;
            count += v[y];
            for (LL b = y; b <= n; b += a)
                v[b]++;
        }
        cout << count << "\n";
    }
}