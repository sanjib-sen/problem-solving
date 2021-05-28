#include <bits/stdc++.h>
using namespace std;
int t, n, k;
int main()
{
    cin >> n >> k;
    while (k--)
    {
        if (n % 10 != 0)
        {
            n -= 1;
            continue;
        }
        n /= 10;
    }
    cout << n << endl;
}