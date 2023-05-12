#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool Res;
    int a,b;
    int t;
    cin>>t;
    while(t--)
    {
        Res=false;
        a=b=0;
        int n,k;
        cin>>n>>k;
        while (n--)
        {
            int l,r;
            cin>>l>>r;
            if(k==r)
                a=1;
            if(k==l)
                b=1;
        }
        if(a&&b)
            Res=true;
        if(Res)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}