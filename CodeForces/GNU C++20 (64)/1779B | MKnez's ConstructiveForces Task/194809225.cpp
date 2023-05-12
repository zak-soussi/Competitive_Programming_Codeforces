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
        if(!(n%2))
        {
            cout<<"YES\n";
            for(int i=0;i<n;i++)
            {
                if(!(i%2))
                    cout<<"1 ";
                else
                    cout<<"-1 ";
            }
            cout<<"\n";
        }
        else
        {
            int j=0;
            for(int i=5;i<n+1;i+=2)
                j++;
            if(j&&1+j<=5000)
            {
                cout<<"YES\n";
                for(int i=0;i<n;i++)
                {
                    if(!(i%2))
                        cout<<j<<" ";
                    else
                        cout<<-j-1<<" ";
                }
                cout<<"\n";
            }
            else
                cout<<"NO\n";
        }
    }
    return 0;
}