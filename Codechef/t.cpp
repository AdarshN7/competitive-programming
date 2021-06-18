#include <bits/stdc++.h>
using namespace std;

int convert24(int hh, int mm, char sm[2])
{
    if (sm[0] == 'A')
    {
        if (hh == 12)
            hh = 0;
    }
    else if (sm[0] == 'P')
    {
        if (hh == 12)
            hh = 12;
        else
            hh = hh + 12;
    }
    return (hh * 100 + mm);
}

int main()
{
    int t, n, p, l, r;
    int hh, mm, hh1, mm1;
    char sm[2], sm1[2];
    cin >> t;
    while (t--)
    {
        scanf("%d:%d %s", &hh, &mm, sm);
        p = convert24(hh, mm, sm);

        cin >> n;
        while (n--)
        {
            scanf("%d:%d %s %d:%d %s", &hh, &mm, sm, &hh1, &mm1, sm1);
            l = convert24(hh, mm, sm);
            r = convert24(hh1, mm1, sm1);
            //cout<<p<<" "<<l<<" "<<r<<endl;
            cout << (((p >= l) && (r >= p)) ? 1 : 0);
        }
        cout << "\n";
    }
    return 0;
}