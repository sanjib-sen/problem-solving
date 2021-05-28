#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n, m, k, a = 0, b = 0, c = 0, d, e;
string s, t;
int main()
{
    cin >> s;
    for (int i = 0; i < s.size(); i += 2)
    {
        n = s[i] - '0';
        if (n == 1)
        {
            a++;
        }
        if (n == 2)
        {
            b++;
        }
        if (n == 3)
        {
            c++;
        }
    }
    t = "";
    while (a--)
    {
        t += "1+";
    }
    while (b--)
    {
        t += "2+";
    }
    while (c--)
    {
        t += "3+";
    }

    cout << t.substr(0, t.size() - 1) << endl;
}