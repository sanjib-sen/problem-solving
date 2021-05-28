#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll t, n, k, a, b, c, d;
string s, r = "";

bool vowel(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
        return true;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        return true;
    return false;
}

int main()
{
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (!vowel(s[i]))
        {
            r += '.';
            if (s[i] < 'a')
            {
                r += s[i] + 32;
            }
            else
            {
                r += s[i];
            }
        }
    }
    cout << r << "\n";
}