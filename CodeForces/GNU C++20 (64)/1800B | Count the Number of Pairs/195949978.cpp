#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>a;
        int res=0;;
        for (int i = 0; i < n; i++)
        {
            a[s[i]]++;
            //cout<<"l'iteration "<<i<<" "<<s[i]<<" egale "<<a[s[i]]<<"\n";
            char d=toupper(s[i]);
            if(s[i]==d)
                if(!a[s[i]+32])
                {
                    //cout<<"\t"<<s[i]+32<<" est "<<a[s[i]+32]<<"\n";
                    a[s[i]+32]=0;
                }
                    
            else
                if(!a[s[i]-32])
                    a[s[i]-32]=0;
        }
        for(auto i:a)
        {
            if(i.first>='a'&&i.first<='z')
             {
            //     cout<<"\t"<<i.first<<"\t"<<i.second<<"\n";
            //     cout<<"\t"<<a[i.first-32]<<"\n";
                int j=min(i.second,a[i.first-32]);
                a[i.first]-=j;
                a[i.first-32]-=j;
                res+=j;
            }
        }
        //cout<<"\t"<<res<<"\n";
        int t=0;
        for(auto i:a)
        {
            //cout<<i.first<<" "<<i.second<<"\n";
            if(i.first>='a'&&i.first<='z')
            {
                t+=max(i.second/2,a[i.first-32]/2);
 
            }
                
            //cout<<"\t"<<t<<"\n";
        }
        cout<<res+min(t,k)<<"\n";
        }
         return 0; 
    }
  