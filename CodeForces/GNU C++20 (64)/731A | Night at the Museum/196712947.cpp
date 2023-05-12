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
    int res=0;
    if(abs(s[0]-'a')<=13)
        res+=abs(s[0]-'a');
    else
        res+=26-abs(s[0]-'a');
    for (int i = 0; i < s.size()-1; ++i) {
        res+=abs(s[i]-s[i+1])<=13?abs(s[i]-s[i+1]):26-abs(s[i]-s[i+1]);
    }
    cout<<res<<nl;
    return 0;
}