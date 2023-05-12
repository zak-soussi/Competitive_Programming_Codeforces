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
       unordered_set<int>a;
        for (int i = 0; i < 4; ++i) {
            a.insert(s[i]);
        }
        if(a.size()==1)
            cout<<"-1"<<nl;
        else if(a.size()==4||a.size()==3)
            cout<<"4"<<nl;
        else
        {
            auto t=a.begin();
            if(std::count(s.begin(), s.end(),*t)==1||std::count(s.begin(), s.end(),*t)==3)
                cout<<"6"<<nl;
            else
                cout<<"4"<<nl;
        }
 
    }
    return 0;
}
 
 