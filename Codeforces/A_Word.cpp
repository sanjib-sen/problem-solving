#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll t, n, m, k, a, b, c, d, e;
string s, r;
int main()
{
    cin >> s;
    t = s.size();
    n = 0;
    while (t--)
    {
        if (s[t] > 'Z')
        {
            n++;
        }
    }
    if (n*2>=s.size())
    {
        r = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < 'a')
            {
                r += s[i] + ('a' - 'A');
            }
            else
            {
                r += s[i];
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] > 'Z')
            {
                r += s[i] - ('a' - 'A');
            }
            else
            {
                r += s[i];
            }
        }
    }
    cout<<r<<endl;
}