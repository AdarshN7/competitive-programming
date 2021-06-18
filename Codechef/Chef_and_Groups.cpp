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
        int count = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (i > 0 && s[i - 1] == s[i])
                continue;
            if (s[i] == '1')
                count++;
        }

        cout << count << "\n";
    }
}