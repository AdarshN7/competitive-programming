#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
ll s1(ll c)
{
    switch (c)
    {
    case 1:
        return 20;
        break;
    case 2:
        return 36;
        break;
    case 3:
        return 51;
        break;
    case 4:
        return 60;
        break;

    default:
        return 0;
        break;
    }
}
ll s2(ll l, ll c)
{
    ll ans = 0;
    switch (c)
    {
    case 1:
        ans = 76;
        break;
    case 2:
        ans = 88;
        break;
    case 3:
        ans = 99;
        break;
    case 4:
        ans = 104;
        break;

    default:
        ans = 60;
        break;
    }
    ans += (l - 1) * 44;
    return ans;
}
int32_t main()
{
    FLASH;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, l, c;
        cin >> n;
        l = n / 4;
        c = n % 4;
        cout << (l == 0 ? s1(c) : s2(l, c)) << "\n";
    }
}