#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int y,w;
    cin>>y>>w;
    y=max(y,w);
    int d=6-y+1;
    int a= gcd(6,d);
    cout<<d/a<<"/"<<6/a<<nl;
    return 0;
}