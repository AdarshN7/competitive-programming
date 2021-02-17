#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  long long int n, maxsum, a;
  cin >> t;
  while (t--)
  {
    maxsum = 0;
    vector<long long int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> a;
      v.push_back(a);
    }
    sort(v.begin(), v.end());
    maxsum = abs(v[0] - v[n - 2]) + abs(v[n - 2] - v[n - 1]) + abs(v[n - 1] - v[0]);
    cout << maxsum << "\n";
  }

  return 0;
}