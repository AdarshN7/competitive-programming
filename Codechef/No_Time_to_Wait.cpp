#include <bits/stdc++.h>
using namespace std;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
int32_t main()
{
    FLASH;
    int n, h, x, max = 0, a;
    cin >> n >> h >> x;
    while (n-- && cin >> a)
    {
        if (a >= max)
            max = a;
    }
    cout << (max >= (h - x) ? "YES" : "NO") << "\n";
}