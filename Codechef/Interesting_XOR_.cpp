#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
int32_t main()
{
    FLASH;
    ll t;
    cin >> t;
    while (t--)
    {
        ll c, temp, d = 0, a, b;
        cin >> c;
        temp = c;
        while (temp)
        {
            temp >>= 1;
            d++;
        }
        a = pow(2, d - 1) - 1;
        b = a ^ c;
        cout << a * b << "\n";
    }
}