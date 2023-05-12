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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int res=0;
        while (d>b)
        {
            a++;
            b++;
            res++;
        }
        if(b>d||a<c)
            cout<<"-1"<<nl;
        else
            cout<<res+a-c<<nl;
    }
    return 0;
}