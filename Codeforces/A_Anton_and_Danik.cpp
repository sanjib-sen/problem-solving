#include <bits/stdc++.h>
using namespace std;
int t, n;
string s,r;
bool p =false;
int main()
{
    int l;
    cin>>l>>s;
    t=0;
    n=0;
    int i = s.size();
    while(i--){
        if(s[i]=='D'){
            n++;
        }
        else{
            t++;
        }
    }
    if(t<n){
        cout<<"Danik"<<endl;
    }
    else if(n==t){
        cout<<"Friendship"<<endl;
    }
    else{
        cout<<"Anton"<<endl;
    }
}