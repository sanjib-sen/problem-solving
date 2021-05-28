#include <bits/stdc++.h>
using namespace std;
int t, n, k, a, b, c, d, e;
string s;
int ar[3];
int main()
{
    cin >> a >> b;
    t = 0;
    while (!(a > b))
    {
        t++;
        a *= 3;
        b *= 2;
    }
    cout << t << endl;
}