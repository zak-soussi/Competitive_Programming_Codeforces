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
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        if(n<=2)
            cout<<"YES"<<nl;
        else
        {
            int i = 1;
            for (; i < n-1; ++i) {
                if(gcd(lcm(a[i],a[i-1]), lcm(a[i],a[i+1]))!=a[i])
                    break;
            }
            if(i==n-1)
                cout<<"YES"<<nl;
            else
                cout<<"NO"<<nl;
        }
    }
    return 0;
}
 
 