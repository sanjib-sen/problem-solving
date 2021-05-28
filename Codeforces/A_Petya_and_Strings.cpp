#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll t, n, m, k, a, b, c, d, e;
string s, r;

ll size(char c)
{
    if (c >= 97)
        return c - 32;
    return c;
}
int main()
{
    cin >> s >> r;
    n = 0;
    for (int i = 0; i != s.size() && i != r.size(); i++)
    {
        if (s.size() == i)
        {
            cout << -1 << "\n";
            return 0;
        }
        if (r.size() == i)
        {
            cout << 1 << "\n";
            return 0;
        }
        if (size(r[i]) > size(s[i]))
        {
            cout << -1 << "\n";
            return 0;
        }
        else if (size(r[i]) < size(s[i]))
        {
            cout << 1 << "\n";
            return 0;
        }
    }
    cout << 0 << "\n";
    return 0;
}