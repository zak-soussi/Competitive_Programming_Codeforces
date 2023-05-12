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
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        map<int,int>b;
        for (int i = 0; i < n; ++i) {
            if(a[i]==0&&b[0])
                continue;
            if(b[abs(a[i])]!=2)
                b[abs(a[i])]++;
        }
        int count=0;
        for(auto i:b)
            count+=i.second;
        cout<<count<<nl;
    }
    return 0;
}
 
 