#include <bits/stdc++.h>
using namespace std;
int t, n;
string s,r;

int main()
{
    cin>>s>>r;
    t=0;
    n=s.size();
    while(n--){
        if(s[t]!=r[n] || s.size()!=r.size()){
            cout<<"NO"<<endl;
            return 0;
        }
        t++;
    }
    cout<<"YES"<<endl;
}