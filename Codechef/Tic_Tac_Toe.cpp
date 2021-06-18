#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define FLASH                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)

int win[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};

bool isWin(char *a, char c)
{
    for (int i = 0; i < 8; i++)
        if (a[win[i][0]] == c && a[win[i][1]] == c && a[win[i][2]] == c)
            return true;
    return false;
}
bool isDraw(char a[9])
{
    for (int i = 0; i < 9; i++)
        if (a[i] == '_')
            return false;
    return true;
}
bool isValid(char a[9])
{
    int xCount = 0, oCount = 0;
    for (int i = 0; i < 9; i++)
    {
        if (a[i] == 'X')
            xCount++;
        if (a[i] == 'O')
            oCount++;
    }
    if (xCount == oCount || xCount == oCount + 1)
    {
        if (isWin(a, 'O'))
        {
            if (isWin(a, 'X'))
                return false;
            return (xCount == oCount);
        }
        if (isWin(a, 'X') && xCount != oCount + 1)
            return false;
        return true;
    }
    return false;
}
int32_t main()
{
    FLASH;
    int t;
    cin >> t;
    while (t--)
    {
        char a[9];
        for (int i = 0; i < 9; i++)
            cin >> a[i];
        cout << (isValid(a) ? (((isWin(a, 'X') || isWin(a, 'O') || isDraw(a))) ? 1 : 2) : 3) << "\n";
    }
}