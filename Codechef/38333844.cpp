#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n, i;
	cin >> n;
	char a[n];
	ll v = 0, h = 0;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 'V')
		{
			v++;
			continue;
		}
		h++;
	}
	if (v > h)
	{
		cout << "Virat" << endl; return;
	}
	else if (h > v)
	{
		cout << "Harshit" << endl; return;
	}
	else
	{
		cout << "Friendship" << endl; return;
	}


}

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	//cin >> t;

	while (t--)
	{
		solve();
	}


	return 0;
}
