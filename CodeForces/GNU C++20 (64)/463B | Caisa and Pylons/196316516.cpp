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
    set<int,greater<>>h;
    int a;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        h.insert(a);
    }
    cout<<*(h.begin())<<nl;
    return 0;
    }
 