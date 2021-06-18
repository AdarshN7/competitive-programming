#include <bits/stdc++.h>
using namespace std;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
int32_t main()
{
    FLASH;
    long long a, b, c;
    cin >> a;
    b = -(-a / 10);
    c = -(-a / 100 * 10 + -a % 10);
    cout << (a >= 0 ? a : max(b, c));
}