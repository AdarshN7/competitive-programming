#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)

bool sumcube(ll x)
{
    ll a = cbrt(x);
    ll b = a - 1;
    return ((a * a * a + b * b * b) == x);
}

int32_t main()
{
    FLASH;
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (sumcube(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}