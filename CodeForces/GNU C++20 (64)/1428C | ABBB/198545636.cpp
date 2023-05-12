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
        string s;
        cin>>s;
        int count=1;
        for (int i = 1; i < s.size(); ++i) {
            if(s[i]=='A')
                count++;
            if(s[i]=='B')
                count--;
            if(!count&&i+1<s.size()){
                count++;
                i++;
            }
        }
        cout<<count<<nl;
    }
    return 0;
}
 
 