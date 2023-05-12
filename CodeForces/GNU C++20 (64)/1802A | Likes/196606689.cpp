#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int neg=0;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
            if(a[i]<0)
                neg++;
        }
        for (int i = 1; i <= n-neg; ++i) {
            cout<<i<<" ";
        }
        for (int i = 1; i <= neg; ++i) {
            cout<<n-neg-i<<" ";
        }
        cout<<nl;
        for (int i = 1; i <= neg; ++i) {
            cout<<"1 0 ";
        }
        for (int i = 1; i <= n-2*neg; ++i) {
            cout<<i<<" ";
        }
        cout<<nl;
    }
    return 0;
    }
 