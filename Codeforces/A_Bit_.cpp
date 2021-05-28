#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll t, n, m, k, a, b, c, d, e;
string s, r;
int main()
{
    cin >> t;
    n = 0;
    while (t--)
    {
        cin >> s;
        if (s == "X++" || s == "++X")
        {
            n++;
        }
        else
        {
            n--;
        }
    }
    cout << n << "\n";
}