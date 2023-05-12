#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_set<int>a;
    for (int i = 0; i < 4; ++i) {
        int b;
        cin>>b;
        a.insert(b);
    }
    cout<<4-a.size()<<nl;
    return 0;
}