#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    if (n % 5 == 0)
    {
        cout << n / 5 << endl;
        return 0;
    }
    cout << (n / 5) + 1 << endl;
}