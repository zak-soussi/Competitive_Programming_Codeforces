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
    string s;
    cin>>s;
    int occ=0;
    for (int i = 0; i < s.size()-1; ++i) {
        if(s[i]==s[i+1])
        {
            occ++;
            s.erase(s.begin()+i+1);
            i--;
        }
    }
    cout<<occ<<nl;
    return 0;
    }
 