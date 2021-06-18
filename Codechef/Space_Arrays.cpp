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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, h = 0, tr = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (i + 1 - v[i] < 0)
            {
                h = 1;
                break;
            }
            tr += i + 1 - v[i];
        }
        cout << (h == 1 ? "Second" : ((tr % 2) == 1 ? "First" : "Second")) << "\n";
    }
}