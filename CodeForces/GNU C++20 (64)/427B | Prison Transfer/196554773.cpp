#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,c;
    cin>>n>>t>>c;
    int s[n];
    for (int i = 0; i < n; ++i) {
        cin>>s[i];
    }
    vector<int>a;
    for (int i = 0; i < n; ++i) {
        if(s[i]>t)
            a.push_back(i);
    }
    ll occ=0;
    if(a.empty())
    {
        occ+=n-c+1;
        cout<<occ<<nl;
    }
    else {
        if(a.size()>1)
 
            for (int i = 0; i < a.size()-1; ++i) {
                if(a[i+1]-a[i]>=c+1)
                occ+=a[i+1]-a[i]-c;
            }
 
 
 
 
        if (a[0] >= c)
            occ += -c + a[0] + 1;
        if (a[a.size()-1] <= n - 1 - c)
            occ += n - 1 - (a[a.size()-1] + c) + 1;
        cout<<occ<<nl;
    }
 
    return 0;
    }
 