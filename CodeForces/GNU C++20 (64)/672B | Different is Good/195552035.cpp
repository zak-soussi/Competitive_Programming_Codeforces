#include <bits/stdc++.h>
#include <string.h>
 
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int t[28];
    int r=0;
    int i=0;
    unordered_set<char> k;
    if(n>26)
        cout<<"-1\n";
    else
    {
 
    
    for(int i=0;i<n;i++)
        k.insert(s[i]);
        
    int rem=26-k.size();
    for(int j=0;j<28;j++)
        t[j]=0;
    for (i; i < n; i++)
    {
        if(!t[s[i]-'a'])
        {
            t[s[i]-'a']=1;
        }
        else
        {
            if(!rem)
                break;
            else
            {
                rem--;
                r++;
            }
        }
       // cout<<"\t"<<rem<<"\n";    
 
    }
    if(i==n)
        cout<<r<<"\n";
    else
        cout<<"-1\n";
    }
    return 0;
}