#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int m = 1000000007;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
void factors(vector<LL> &v, int n)
{
    for (LL i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                v.push_back(i);
            else
            {
                v.push_back(i);
                v.push_back((n / i));
            }
        }
    }
}
int32_t main()
{
    FLASH;
    LL t;
    cin >> t;
    while (t--)
    {
        LL k, sum = 0, l, tim, s1 = 0;
        vector<LL> v;
        cin >> k;
        l = 4 * k + 1;
        factors(v, l);
        for (auto x : v)
        {
            tim = ((2 * k - 1) / x);
            sum += tim * x;
            s1 += tim;
        }
        sum += l + (2 * k - 1 - s1);
        cout << sum << "\n";
    }
}