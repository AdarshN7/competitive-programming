#include <bits/stdc++.h>
using namespace std;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
int32_t main()
{
    FLASH;
    int t, m, n, x;
    vector<int> a;
    vector<int> b;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (auto i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }

        for (auto i = 0; i < m; i++)
        {
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(),b.end());
        long long int s1 = accumulate(a.begin(), a.end(), 0);
        long long int s1 = accumulate(b.begin(), b.end(), 0);
        
    }
}