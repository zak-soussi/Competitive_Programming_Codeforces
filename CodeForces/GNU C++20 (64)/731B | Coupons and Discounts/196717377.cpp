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
    int coupon=0;
    int i = 0;
    for (; i < n; ++i) {
        if(!coupon)
        {
            if(a[i]%2)
                coupon++;
        }
        else
        {
            if(a[i]==0)
            {
                cout<<"NO"<<nl;
                break;
 
            }
            else
            {
                coupon--;
                a[i]--;
                if(a[i]%2)
                    coupon++;
            }
    }
    }
    if(i==n) {
        if (coupon)
            cout << "NO" << nl;
        else
            cout << "YES" << nl;
    }
    return 0;
}