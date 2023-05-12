#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        int ps[n];
        ps[0]=a[0]%2?1:0;
        for (int i = 1; i < n; ++i) {
            ps[i]=ps[i-1]+a[i]%2;
        }
        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            int odd;
            if(l>=2)
                 odd=ps[n-1]-(ps[r-1]-ps[l-2]);
            else
                 odd=ps[n-1]-ps[r-1];
            if(k%2)
            {
                if((r-l+odd+1)%2)
                    cout<<"YES"<<nl;
                else
                    cout<<"NO"<<nl;
            }
            else
            if(odd%2)
                cout<<"YES"<<nl;
            else
                cout<<"NO"<<nl;
        }
    }
    return 0;
}