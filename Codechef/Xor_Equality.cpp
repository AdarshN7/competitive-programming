#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int m = 1000000007;
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
        LL n, x = 2, c = 1;
        cin >> n;
        n--;
        while (n > 0)
        {
            if (n & 1)
                c = (c * x) % m;
            n = n >> 1;
            x = (x * x) % m;
        }
        cout << c << "\n";
    }
}