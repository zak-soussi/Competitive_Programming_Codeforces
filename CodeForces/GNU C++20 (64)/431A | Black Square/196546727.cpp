#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int occ=0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='1')
            occ+=a;
        else if(s[i]=='2')
            occ+=b;
        else if(s[i]=='3')
            occ+=c;
        else
            occ+=d;
    }
    cout<<occ<<nl;
    return 0;
    }
 