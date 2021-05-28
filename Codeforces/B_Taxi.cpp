#include <bits/stdc++.h>
using namespace std;
int t, n;
string s,r;
priority_queue<int> p;
int main()
{
    cin>>t;
    int sum =0;
    while(t--){
        cin>>n;
        p.push(n);
    }
    int o =4;
    while(!p.empty()){
        if(p.top()==4){
            sum+=1;
            p.pop();
            continue;
        }
        if(p.top()<o){
            o-=p.top();
            p.pop();
            continue;
        }
        if(p.top()==o){
            o=4;
            sum+=1;
            p.pop();
            continue;
        }
        if(p.top()>o){
            int mn = p.top()-o;
            o=4;
            sum+=1;
            p.pop();
            p.push(mn);
            continue;
        }
    }
    if(o>0){
        sum+=1;
    }
    cout<<sum<<endl;
}