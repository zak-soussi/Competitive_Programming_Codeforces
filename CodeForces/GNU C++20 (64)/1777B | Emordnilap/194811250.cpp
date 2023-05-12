#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
ll modulofactorial(ll n)
{
    ll a=n;
    ll p=1000000007;
    for(int i=2;i<n;i++)
    {
        a=((a%p)*(i%p))%p;
    }
    return a;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t; 
    while(t--)
    {
        ll n,p=1000000007;
        cin>>n;
        ll w=(((modulofactorial(n)%p)*(n%p)%p)*(n-1%p)%p);
        cout<<w<<"\n";
    }
        
    return 0;
}