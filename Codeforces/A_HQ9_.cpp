#include <bits/stdc++.h>
using namespace std;
int t, n;
string s,r;
bool p =false;
int main()
{
    cin>>s;
    t = s.size();
    while(t--){
        if(s[t]=='H'|| s[t]=='Q' || s[t] == '9'){
            p =true;
        }
    }
    if(p) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}