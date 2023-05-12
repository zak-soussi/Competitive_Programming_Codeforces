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
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]>='A'&&s[i]<='Z')
            occ++;
    }
    if(occ>s.size()/2)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<nl;
 
 
    return 0;
}