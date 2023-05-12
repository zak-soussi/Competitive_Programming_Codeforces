#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a;
    cin>>n>>a;
    int x[n+1];
    x[n]=a;
    for (int i = 0; i < n; ++i) {
        cin>>x[i];
    }
    sort(x,x+n+1);
    int i = 0;
    for (; i < n + 1; ++i) {
        if(x[i]==a)
            break;
    }
    int distance;
    if(n==1)
        distance=0;
    else if(i==0)
        distance=x[n-1]-x[0];
    else if(i==n)
        distance=x[i]-x[1];
    else
        if(n==2)
            distance=min(x[2]-x[1],x[1]-x[0]);
        else
        {
            int w=min(x[i]-x[0]+x[n-1]-x[0],x[n-1]-x[i]+x[n-1]-x[0]);
            int v=min(x[i]-x[1]+x[n]-x[1],x[n]-x[i]+x[n]-x[1]);
            distance= min(w,v);
        }
    cout<<distance<<nl;
    return 0;
    }
 