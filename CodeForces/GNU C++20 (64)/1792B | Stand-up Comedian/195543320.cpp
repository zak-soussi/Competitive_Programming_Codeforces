#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a[4];
        for (int i = 0; i < 4; i++)
        {
            cin>>a[i];
        }
        if(!a[0])
            cout<<"1\n";
        else
        {
 
        
        ll jokes;
        jokes=a[0];
        //cout<<"\t"<<jokes<<"\n";
        ll rem;
        if(a[1]>=a[2])
        {
            jokes+=2*a[2];
            rem=a[1]-a[2];
        }
        else
        {
            jokes+=2*a[1];
            rem=a[2]-a[1];
        }
        //cout<<"\t"<<jokes<<"\n";
        
        if(a[0]<rem)
            cout<<a[0]+1+jokes<<"\n";
        else
        {
            if(a[3]<=a[0]-rem)
            cout<<jokes+rem+a[3]<<"\n";
            else
            cout<<jokes+1+a[0]<<"\n";
        }   
            
    }
    }
    return 0;
}
 
 