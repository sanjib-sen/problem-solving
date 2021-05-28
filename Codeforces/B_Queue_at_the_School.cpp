#include <bits/stdc++.h>
using namespace std;
int t, n;
string s;

int main()
{
    cin >> t >> n >> s;
    while (n--)
    {
        bool flag = false;
        for (int i = 0; i < s.size() - 1; i += 1)
        {
            if (s[i] == 'B' && s[i + 1] == 'G' && flag == false)
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                flag = true;
                continue;
            }
            flag = false;
        }
    }
    cout << s << endl;
}