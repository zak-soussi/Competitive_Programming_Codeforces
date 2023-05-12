#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int h;
    cin>>n>>h;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int res=0;
    for (int i = 0; i < n; ++i) {
        if(a[i]>h)
            res+=2;
        else
            res+=1;
    }
    cout<<res<<"\n";
 
    return 0;
}