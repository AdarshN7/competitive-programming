#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
string longDivision(string number, LL divisor)
{
    string ans;
    LL idx = 0;
    LL temp = number[idx] - '0';
    while (temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');
    LL l = number.size();
    while (l > idx)
    {
        ans += (temp / divisor) + '0';
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }
    if (ans.length() == 0)
        return "0";
    return ans;
}
int32_t main()
{
    FLASH;
    LL t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        LL divisor = 2;
        cout << longDivision(n, divisor) << "\n";
    }
}