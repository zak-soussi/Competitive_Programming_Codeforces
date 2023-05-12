#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main() {
    int a,n;
    cin>>n>>a;
    map<int,int,greater<>>b;
    for (int i = 0; i < a; ++i) {
        int c,d;
        cin>>c>>d;
        b[d]+=c;
    }
    ll res=0;
    for(auto i:b)
        if(!n)
            break;
        else if(n>=i.second)
        {
            res+=i.first*i.second;
            n-=i.second;
        }
        else
        {
            res+=i.first*n;
            n=0;
        }
    cout<<res<<nl;
    return 0;
}