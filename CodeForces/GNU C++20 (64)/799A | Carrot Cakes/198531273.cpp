#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    if(n<=k)
        cout<<"NO"<<nl;
    else
    {
        int c=n%k?n/k+1:n/k;
        if(d<(c-1)*t)
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
 
    }
    return 0;
}
 
 