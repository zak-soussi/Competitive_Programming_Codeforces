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
    int occ=1;
    for (int i = 0; i < n-1; ++i) {
        if(a[i]!=a[i+1])
            occ++;
    }
    cout<<occ<<nl;
    return 0;
    }
 