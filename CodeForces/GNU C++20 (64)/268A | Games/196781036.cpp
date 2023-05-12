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
    int a[n][2];
    for (int i = 0; i < n; ++i) {
        cin>>a[i][0]>>a[i][1];
    }
    int res=0;
    for (int i = 0; i < n; ++i) {
 
        for (int j = 0; j < n; ++j) {
            if(i==j)
                continue;
            if(a[i][0]==a[j][1])
                res++;
        }
    }
    cout<<res<<nl;
    return 0;
}