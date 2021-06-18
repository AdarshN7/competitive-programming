#include <bits/stdc++.h>
using namespace std;
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
        int n, l, ans = 0;
        cin >> n;
        cin >> l;
        for (int i = 1; i < n; i++)
        {
            int e;
            cin >> e;
            int a = min(l, e), b = max(l, e);
            while (2 * a < b)
            {
                ans++;
                a *= 2;
            }
            l = e;
        }
        cout << ans << "\n";
    }
}