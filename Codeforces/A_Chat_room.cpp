#include <bits/stdc++.h>
using namespace std;
int t, n, k, a, b, c, d, e;
string s;
int main()
{
    cin >> s;
    char ar[5] = {'h', 'e', 'l', 'l', 'o'};
    n = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ar[n])
        {
            n++;
            continue;
        }
    }
    if (n == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}