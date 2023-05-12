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
    int b[m][2];
    for (int i = 0; i < m; ++i) {
        cin>>b[i][0]>>b[i][1];
    }
    for (int i = 0; i < m; ++i) {
        int c=a[b[i][0]-1];
        a[b[i][0]-1]=0;
        if(b[i][0]-2>=0)
     {
 
         a[b[i][0]-2]+=b[i][1]-1;
     }
        if(b[i][0]<=n)
            a[b[i][0]]+=c-b[i][1];
    }
    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<nl;
    }
    return 0;
}