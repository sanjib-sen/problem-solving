#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll t, n = 0;
int main()
{
    cin >> t;
    while (t / 10 > 0)
    {
        if (t % 10 == 4 || t % 10 == 7)
        {
            n++;
        }
        t /= 10;
    }
    if (t % 10 == 4 || t % 10 == 7)
    {
        n++;
    }
    if (n == 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    while (n > 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
        {
            cout << "NO" << endl;
            return 0;
        }
        n /= 10;
    }
    cout << "YES" << endl;
}