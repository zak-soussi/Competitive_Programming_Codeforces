#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,t;
    cin>>s>>t;
    int i=0,j=0;
    for (; i < s.size(); ++i) {
        for (; j < t.size(); ++j) {
            if(s[i]==t[j])
                break;
        }
        j++;
        if(j==t.size()+1)
            break;
    }
    cout<<i+1<<nl;
    return 0;
}