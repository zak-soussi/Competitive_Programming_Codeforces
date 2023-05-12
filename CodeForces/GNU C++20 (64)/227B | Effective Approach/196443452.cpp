#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
    }
    map<int,int>t;
    for (int i = 0; i < n; ++i) {
        t[a[i]]=i+1;
    }
    ll vasya=0;
    for (int i = 0; i < m; ++i) {
        if(!t[b[i]])
            vasya+=n;
        else
            vasya+=t[b[i]];
    }
    ll petya=0;
    for (int i = 0; i < m; ++i) {
        if(!t[b[i]])
            petya+=n;
        else
            petya+=n+1-t[b[i]];
    }
    cout<<vasya<<" "<<petya<<nl;
    return 0;
    }
 