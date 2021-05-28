#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    cin >> t;
    int n = t;
    if (t % 4 == 0 || t % 7 == 0 || t % 44 == 0 || t % 47 == 0 || t % 74 == 0 || t % 77 == 0 || t % 447 == 0 || t % 444 == 0 || t % 474 == 0 || t % 477 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}