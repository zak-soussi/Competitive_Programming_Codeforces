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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0;
        for (int i = 0; i < n-1; ++i) {
            if(s[i]==s[i+1])
            {
                a++;
                break;
            }
        }
        if(a)
            cout<<"NO"<<nl;
        else
        {
            int w=0;
            map<char,int>b;
            int i=0;
            while (i+1<n)
            {
                if(b[s[i]]==2||b[s[i+1]]==1)
                {
                    w=1;
                    break;
                }
                else
                {
                    b[s[i]]=1;
                    b[s[i+1]]=2;
                }
                i+=2;
            }
            if(w)
                cout<<"NO"<<nl;
            else
            {
                if(i==n-1)
                {
                    if(b[s[i]]==2)
                        cout<<"NO"<<nl;
                    else
                        cout<<"YES"<<nl;
                }
                else
                    cout<<"YES"<<nl;
            }
        }
    }
    return 0;
}