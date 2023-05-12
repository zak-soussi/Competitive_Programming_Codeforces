#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int res;
    while(n--)
    {
        int a[3];
        for (int i = 0; i < 3; ++i) {
            cin>>a[i];
        }
 
        if(a[0]+a[1]+a[2]>=2)
            res++;
    }
    cout<<res<<"\n";
    return 0;
}