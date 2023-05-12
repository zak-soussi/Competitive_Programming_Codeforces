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
        string a,b;
        cin>>a>>b;
        if(a[0]==b[0])
        {
            cout<<"YES"<<nl;
            cout<<a[0]<<"*"<<nl;
        }
        else if(a[a.size()-1]==b[b.size()-1])
        {
            cout<<"YES"<<nl;
            cout<<"*"<<b[b.size()-1]<<nl;
 
        }
        else
        {
 
            string s1;
            int k=a.size()-1;
            int j=k;
            int i=0;
            while(j>i)
            {
                s1=a.substr(i,j-i+1);
                if(b.find(s1)!=string::npos)
                    break;
                j--;
                if(j==i)
                {
                    j=k;
                    i++;
                }
            }
            if(i>=j)
                cout<<"NO"<<nl;
            else
            {
                cout<<"YES"<<nl;
                cout<<"*"<<s1<<"*"<<nl;
            }
        }
    }
    return 0;
}
 
 