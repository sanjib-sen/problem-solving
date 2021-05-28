#include <bits/stdc++.h>
using namespace std;
int t, n, sum = 0, sum2 = 0;
priority_queue<int> p;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum += n;
        p.push(n);
    }
    t++;
    while (sum2 <= sum / 2)
    {
        sum2 += p.top();
        p.pop();
        t++;
    }
    cout << t;
}