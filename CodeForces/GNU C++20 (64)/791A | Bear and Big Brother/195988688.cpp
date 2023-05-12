#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    int b;
    cin>>a>>b;
    int res=0;
    while(b>=a)
    {
        a*=3;
        b*=2;
        res++;
    }
    cout<<res<<"\n";
    return 0;
}