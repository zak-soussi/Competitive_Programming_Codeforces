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
        if(!(n&1))
            cout<<"NO"<<nl;
        else
        {
            cout<<"YES"<<nl;
            int a=(3+3*n)/2;
            int j=a-1;
            for (int i = 1; i <= n; i+=2) {
                cout<<i<<" "<<j<<nl;
                j--;
            }
            j=2*n;
            for (int i = 2; i < n; i+=2) {
                cout<<i<<" "<<j<<nl;
                j--;
            }
        }
    }
    return 0;
}
 
 