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
    stack<int>a;
    queue<int>b;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='l')
            a.push(i+1);
        else
            b.push(i+1);
    }
    while (!b.empty())
    {
        cout<<b.front()<<nl;
        b.pop();
    }
    while (!a.empty())
    {
        cout<<a.top()<<nl;
        a.pop();
    }
    return 0;
}
 
 