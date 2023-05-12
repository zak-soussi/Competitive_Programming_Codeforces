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
    int res=0;
    int lvl=0;
    for (int i = 0; i < n; ++i) {
 
        res+=a[i]-lvl+1;
        if(i+1==n)
        {
            break;
        }
        else {
 
            if (a[i + 1] >= a[i]) {
                res++;
                lvl = a[i];
            } else {
                res += a[i] - a[i + 1] + 1;
                lvl = a[i + 1];
            }
        }
    }
    cout<<res<<nl;
    return 0;
}