#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,b,d;
    cin>>n>>b>>d;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    ll res=0;ll occ=0;
    for (int i = 0; i < n; ++i) {
        if(a[i]<=b)
        {
            res+=a[i];
            if(res>d)
            {
                occ++;
                res=0;
            }
        }
    }
    cout<<occ<<nl;
    return 0;
}