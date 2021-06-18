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
        LL n, mi, xi, c = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> n;
        mi = distance(v.begin(), max_element(v.begin(), v.end())) + 1;
        xi = distance(v.begin(), min_element(v.begin(), v.end())) + 1;
        if (xi <= n / 2 && mi <= n / 2)
            c += max(xi, mi);
        else if (xi > n / 2 && mi > n / 2)
            c += n - min(xi, mi);
        else if (xi >= n / 2 && mi <= n / 2)
            c += mi + (n - xi);
        else if (xi <= n / 2 && mi >= n / 2)
            c += xi + (n - mi);
        cout << c << "\n";
    }
}