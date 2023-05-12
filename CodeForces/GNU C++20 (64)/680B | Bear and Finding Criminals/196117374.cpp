#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a;
    cin>>n>>a;
    int b[n];
    for (int i = 0; i < n; ++i) {
        cin>>b[i];
    }
    int res=0;
    int i=a-1,j=a-1;
    if(b[i])
        res++;
    i++;
    j--;
    for (; i <n&&j>=0; ++i&&--j) {
        if (b[i]*b[j])
            res+=2;
    }
    if(i==n&&j>=0)
    {
        while(j>=0)
        {
            if(b[j])
                res++;
            j--;
        }
        cout<<res<<nl;
    }
    else if(j<0&&i!=n) {
        while (i < n) {
            if (b[i])
                res++;
            i++;
        }
        cout<<res<<nl;
    }
    else
        cout<<res<<nl;
    return 0;
}