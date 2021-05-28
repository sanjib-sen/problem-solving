#include <bits/stdc++.h>
using namespace std;
int t, n, m, k, a, b, c, d, e;
string s;
int ar[3];
int main()
{
    cin >> t;
    n = 0;
    k = 0;
    while (t--)
    {
        cin >> a >> b;
        n += b;
        n -= a;
        if (k < n)
        {
            k = n;
        }
    }
    cout << k << endl;
}