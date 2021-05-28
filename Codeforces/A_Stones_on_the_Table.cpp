#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll t, n = 0, m, k, a, b, d, e;
char c, p = '0';
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> c;
        if (c == p)
        {
            n++;
            continue;
        }
        p = c;
    }
    cout << n << "\n";
}