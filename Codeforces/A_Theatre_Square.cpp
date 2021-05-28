#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll t, n, k, a, b, c, d;
int main()
{
    cin >> a >> b >> c;
    t = a / c;
    n = b / c;
    if (a % c != 0)
    {
        t++;
    }
    if (b % c != 0)
    {
        n++;
    }

    cout << t * n << "\n";
}