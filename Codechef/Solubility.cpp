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
        LL x, a, b;
        cin >> x >> a >> b;
        cout << ((a + (100 - x) * b) * 10) << "\n";
    }
}