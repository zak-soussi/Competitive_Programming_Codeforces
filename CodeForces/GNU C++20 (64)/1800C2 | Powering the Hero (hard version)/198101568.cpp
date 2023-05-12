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
        ll a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        priority_queue<int> g;
        ll power=0;
        for (int i = 0; i < n; ++i) {
            if(!a[i]&&g.empty())
                continue;
            if(!a[i])
            {
                power+=g.top();
                g.pop();
            }
            else
                g.push(a[i]);
        }
        cout<<power<<nl;
    }
    return 0;
}