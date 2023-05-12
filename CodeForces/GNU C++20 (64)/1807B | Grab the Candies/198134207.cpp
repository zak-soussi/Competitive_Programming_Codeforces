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
        int all=0;
        int even=0;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        for (int i = 0; i < n; ++i) {
            all+=a[i];
            if(!(a[i]%2))
                even+=a[i];
        }
        if(all-even<even)
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    return 0;
}