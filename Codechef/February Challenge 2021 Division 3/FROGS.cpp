#include <bits/stdc++.h>
using namespace std;
int idx(vector<int> v, int k)
{
    auto it = find(v.begin(), v.end(), k);
    if (it != v.end())
    {
        int i = it - v.begin();
        return i;
    }
    else
        return -1;
}

int main()
{
    int t, n, a;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int count = 0;
        vector<int> w;
        vector<int> l;
        vector<int> pos(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            w.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            l.push_back(a);
        }
        for (int i = 0; i < n; i++)
            pos[i] = i;
        for (int i = 0; i < n; i++)
            b[i] = w[i];
        sort(b.begin(), b.end());
        for (int i = 1; i < n; i++)
        {
            int index = idx(w, b[i]);
            int p = pos[idx(w, b[i - 1])];
            int temp = index;
            while (temp <= p)
            {
                temp += l[index];
                pos[index] = temp;
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}