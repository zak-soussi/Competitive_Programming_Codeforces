#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
ll power_no_mod(ll a, ll b) {
    ll result = 1;
    while (b) {
        if (b&1) result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}
ll power_with_mod(ll a, ll b,ll m) {
    ll result = 1;
    while (b) {
        if (b&1) result =(result*a)%m;
        a = (a*a)%m;
        b /= 2;
    }
    return result;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x0,y0;
    cin>>n>>x0>>y0;
    vector<vector<int>>a(n);
    for (int i = 0; i < n; ++i) {
        a[i].resize(2);
        cin>>a[i][0]>>a[i][1];
    }
    int occ=0;
    int denom;
    int num;
    int b;
    while (!a.empty())
    {
        if(a[0][1]==y0)
        {
            denom=0;
            num=1;
            b=y0;
        }
        else if(a[0][0]==x0)
        {
            num=0;
 
        }
        else
        {
        denom=a[0][1]-y0;
        num=a[0][0]-x0;
        b=(num*y0-denom*x0);
        }
        occ++;
        a.erase(a.begin(),a.begin()+1);
        int i = 0;
        while (i < a.size()) {
            if(!num)
            {
                if(a[i][0]==x0)
                {
                    a.erase(a.begin()+i,a.begin()+i+1);
                    i--;
                }
            }
            else if(!((denom*a[i][0]+b)%num)&&!((denom*a[i][0]+b)%num)&&(a[i][1]==((denom*a[i][0]+b)/num)))
            {
                a.erase(a.begin()+i,a.begin()+i+1);
                i--;
            }
            i++;
        }
    }
    cout<<occ<<nl;
    return 0;
}