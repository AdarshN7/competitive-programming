#include <bits/stdc++.h>
using namespace std;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
int32_t main()
{
    FLASH;
    int t, n, count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        count = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            int j = i + 1;
            if (a[i] == a[j])
            {
            }
            else if (a[i] > a[j])
            {
                a[i] += 1;
                count++;
            }
            else if (a[i] < a[j])
            {
                a[j] += 1;
                count++;
            }
        }
        cout << count << "\n";
    }
}