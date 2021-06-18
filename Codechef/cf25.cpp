#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll count(string s[], int n)
{
    sort(s, s + n);
    string a, b;
    ll c = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            a = s[i];
            b = s[j];
            
            if (a[0] == b[0])
            {
                continue;
            }
            else if (a == b)
            {
                continue;
            }
            else
            {
                swap(a[0], b[0]);
                if (!binary_search(s, s + n, a) && !binary_search(s, s + n, b))
                c += 2;
            }
        }
    }
    return c;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s[n];
        for (ll i = 0; i < n; i++)
            cin >> s[i];
        ll c = count(s, n);
        cout << c << "\n";
    }
    return 0;
}
