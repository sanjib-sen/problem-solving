#include <bits/stdc++.h>
using namespace std;
int t, n, k, a, b, c, d, e;
string s;
int ar[3];
int main()
{
    cin >> t;
    while (t--)
    {
        n = 3;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            ar[i] += a;
        }
    }
    if (ar[0] == 0 && ar[1] == 0 && ar[2] == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}