#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    ll res=0;
    int pressed=0;
    while(n)
    {
       res+=pressed*(n-1);
       res+=n;
       n--;
       pressed++;
    }
    cout<<res<<nl;
    return 0;
}