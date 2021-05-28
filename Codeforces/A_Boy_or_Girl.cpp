#include <bits/stdc++.h>
using namespace std;
int t, n, m, k, a = 0, b = 0, c, d, e;
string s, r;
char ch = 'a';

bool bol = false;
int main()
{
    int ar[150];
    cin >> s;
    int i = s.size();
    n = 0;
    for (t = 0; t < i; t++)
    {
        if (ar[s[t]] == 5)
        {
            continue;
        }
        n++;
        ar[s[t]] = 5;
    }
    if (n % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}
