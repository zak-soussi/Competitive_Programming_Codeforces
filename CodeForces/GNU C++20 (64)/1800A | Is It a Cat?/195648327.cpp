#include <bits/stdc++.h>
#include<string.h>
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
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        //cout<<s<<"\n";
        int i=0;
        for(i;i<n-1;i++)
        {
           // cout<<"\t"<<i<<"\n";
            //cout<<s[i]<<"\n";
            if(s[i]=='M'&&s[i+1]!='M'&&s[i+1]!='E')
            {  // cout<<"\t1"<<"\n";
                cout<<"NO\n";
            break;}
            else if(s[i]=='E'&&s[i+1]!='E'&&s[i+1]!='O')
            {
                //cout<<"\t2"<<"\n";
            cout<<"NO\n";
            break;}
            else if(s[i]=='O'&&s[i+1]!='O'&&s[i+1]!='W')
            {
                //cout<<"\t3"<<"\n";
            cout<<"NO\n";
            break;
            }
            else if(s[i]=='W'&&s[i+1]!='W')
            {
                //cout<<"\t4"<<"\n";
            cout<<"NO\n";
            break;}  
        }
        if(i==n-1)
        {
                    if(s[0]=='M'&&s[n-1]=='W')
            cout<<"YES\n";
        else
            cout<<"NO\n";
        }
 
    }
    return 0;
}