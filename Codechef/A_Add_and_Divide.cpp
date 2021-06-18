#include <iostream>
using namespace std;
int counter = 1;
int opt(long int a, long int b)
{
    if (a < b)
    {
        return (counter + 1);
    }

    else if (counter % 10 != 0)
    {
        counter++;
        //cout<<counter<<endl;
        return opt(a / b, b);
    }
    else
    {
        counter++;
        return opt(a, b + 1);
    }
}
int main()
{

    int t;

    cin >> t;
    while (t--)
    {
        counter = 0;
        long long int a, b;
        cin >> a >> b;
        if (b == 1)
            cout << (opt(a, b + 1) + 1) << endl;
        else
            cout << (opt(a, b) - 1) << endl;
    }
}