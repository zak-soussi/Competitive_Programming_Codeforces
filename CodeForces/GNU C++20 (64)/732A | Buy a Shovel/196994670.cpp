#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k,r;
    cin>>k>>r;
    int res=1;
    while(true)
    {
        if(!((k*res)%10)||r==(k*res)%10)
            break;
        else
            res++;
    }
    cout<<res<<nl;
    return 0;
}