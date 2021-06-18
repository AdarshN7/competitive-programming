#include <bits/stdc++.h>
using namespace std;
#define FLASH                  \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0)
bool isValid(string password)
{

  if (!((password.length() >= 10)))
    return false;
  if (password.find(" ") !=
      std::string::npos)
    return false;

  if (true)
  {
    int count = 0;
    for (int i = 1; i <= 8; i++)
    {
      string str1 = to_string(i);

      if (password.find(str1) !=
          std::string::npos)
        count = 1;
    }
    if (count == 0)
      return false;
  }
  if (!((password.find("@") != std::string::npos) ||
        (password.find("#") != std::string::npos) ||
        (password.find("%") != std::string::npos) ||
        (password.find("&") != std::string::npos) ||
        (password.find("?") != std::string::npos)))
    return false;

  if (true)
  {
    int count = 0;
    for (int i = 66; i <= 89; i++)
    {
      char c = (char)i;
      string str1(1, c);
      if (password.find(str1) !=
          std::string::npos)
        count = 1;
    }
    if (count == 0)
      return false;
  }

  if (true)
  {
    int count = 0;
    for (int i = 90; i <= 122; i++)
    {
      char c = (char)i;
      string str1(1, c);

      if (password.find(str1) !=
          std::string::npos)
        count = 1;
    }
    if (count == 0)
      return false;
  }
  return true;
}

int32_t main()
{
  FLASH;
  int t;
  string s;
  cin >> t;
  while (t--)
  {
    cin >> s;
    if (isValid(s))
      cout << "YES\n";
    else
      cout << "NO\n";
            
    }

}