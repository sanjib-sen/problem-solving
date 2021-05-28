#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll t, n, m, k, a = 0, b = 0, c, d, e;
string s, r;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> n;
            if (n == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    cout << abs(a - 3) + abs(b - 3) << "\n";
}