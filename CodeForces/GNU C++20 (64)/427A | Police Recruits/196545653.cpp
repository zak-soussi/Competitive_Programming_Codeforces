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
    map<string,int>a;
    for (int i = 0; i < n; ++i) {
        int b;cin>>b;
        if(b>0)
            a["hired"]+=b;
        else
        {
            if(a["hired"])
                a["hired"]--;
            else
                a["untrea"]++;
        }
 
    }
    cout<<a["untrea"]<<nl;
    return 0;
    }
 