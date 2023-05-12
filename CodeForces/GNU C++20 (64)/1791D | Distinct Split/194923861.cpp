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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int Distinctleft[n];
        int DistinctRight[n];
        int exists[27];      
        for(int i=0;i<n;i++)
        {
            Distinctleft[i]=0;
            DistinctRight[i]=0;
        }
        for(int i=0;i<27;i++)
            exists[i]=0;
        exists[s[0]-'a']=1;
        Distinctleft[0]=1;
        for(int i=1;i<n;i++)
        {
            Distinctleft[i]=Distinctleft[i-1];
            if(!exists[s[i]-'a'])
            {
                exists[s[i]-'a']=1;
                Distinctleft[i]++;
            }
        }
        for(int i=0;i<27;i++)
            exists[i]=0;
        exists[s[n-1]-'a']=1;
        DistinctRight[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            DistinctRight[i]=DistinctRight[i+1];
            if(!exists[s[i]-'a'])
            {
                exists[s[i]-'a']=1;
                DistinctRight[i]++;
            }
        }
        int result=0;
        for(int i=0;i<n-1;i++)
            result=max(result,Distinctleft[i]+DistinctRight[i+1]);
        cout<<result<<"\n";
    }
    return 0;
}