#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int occ=0;
 
    while (true)
    {
        int sum=0;
        for (int i = 0; i < s.size(); ++i) {
            sum+=s[i]-'0';
        }
        if(s.size()>1)
            occ++;
        else
            break;
        s= to_string(sum);
    }
    cout<<occ<<nl;
    return 0;
    }
 