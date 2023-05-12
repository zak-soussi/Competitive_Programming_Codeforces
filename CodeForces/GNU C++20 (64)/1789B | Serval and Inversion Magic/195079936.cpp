#include <bits/stdc++.h>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1=s;
        reverse(s1.begin(),s1.end());
        s=s.substr(0,n/2);
        s1=s1.substr(0,n/2);
        vector <int> a;
        for(int i=0;i<n/2;i++)
            if(s1[i]!=s[i])
                a.push_back(i);
        if(a.size()>1)
        {
 
            int l=a[0];
            int r=a[a.size()-1];
            int j=l+1;
            for(j;j<r;j++)
                if(s1[j]==s[j])
                {
                    cout<<"NO\n";
                    break;
                }
            if(j==r)
                cout<<"YES\n";
        }
        else
            cout<<"YES\n";
           
 
    }
    return 0;
}