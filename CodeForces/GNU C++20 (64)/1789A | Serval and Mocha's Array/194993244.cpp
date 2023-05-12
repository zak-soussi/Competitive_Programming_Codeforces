#include <bits/stdc++.h>
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
        int a[n];
        for(int i=0;i<n;i++)
        {
             cin>>a[i];
        }
        int j;
        for(j=0;j<n-1;j++)
        { 
            int i;       
            for (i=j+1; i < n; i++)
            {
                if(__gcd(a[j],a[i])<=2)
                {
                    cout<<"YES\n";
                    break;
                }
            }
            if(i!=n)
                break;
 
        }
 
        if(j==n-1)
            cout<<"NO\n";
           
    }
    return 0;
}