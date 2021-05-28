#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll t, n, m, k, a = 0, b = 0, c, d, e;
string s, r;
char ch = 'a';
bool bol = false;
int main()
{
    cin >> s;
    n = s.size();
    while (n--)
    {
        if (s[n] != ch)
        {
            a = 0;
            b = 0;
            ch = s[n];
            continue;
        }
        a++;
        if (a == 6)
        {
            bol = true;
        }
        ch = s[n];
    }
    if (bol)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
}