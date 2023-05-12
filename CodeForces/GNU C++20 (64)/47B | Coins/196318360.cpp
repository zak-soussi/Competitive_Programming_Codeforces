#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a1,a2,a3;
    cin>>a1>>a2>>a3;
    map<char,int>t;
    if(a1[1]=='<')
        t[a1[2]]++;
    else
        t[a1[0]]++;
    if(a2[1]=='<')
        t[a2[2]]++;
    else
        t[a2[0]]++;
    if(a3[1]=='<')
        t[a3[2]]++;
    else
        t[a3[0]]++;
    if(t.size()==3)
        cout<<"Impossible"<<nl;
    else
    {
        int occ=0;
        char w,y,z;
        for(auto i:t)
        {
            if(i.first=='A')
                occ++;
            else if(i.first=='B')
                occ+=2;
            else
                occ+=3;
            if(i.second==2)
                y=i.first;
            else
                z=i.first;
        }
        if(occ==3)
            cout<<"C"<<z<<y<<nl;
        else if(occ==4)
            cout<<"B"<<z<<y<<nl;
        else
            cout<<"A"<<z<<y<<nl;
    }
 
    return 0;
    }
 