#include <bits/stdc++.h>
using namespace std;
int t, n, k, a, b, c, d, e;
string s;
int ar[3];
int main()
{
    cin >> a >> b >> c;
    int n = 0;
    for (int i = 0; i <= c; i++)
    {
        n += i * a;
    }
    if (n <= b)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << n - b << endl;
}