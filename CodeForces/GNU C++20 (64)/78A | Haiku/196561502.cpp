#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
 
 
    int occ=0;
    for (int i = 0; i < s1.size(); ++i) {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
            occ++;
    }
    if(occ!=5)
        cout<<"NO"<<nl;
    else
    {
        occ=0;
        for (int i = 0; i < s2.size(); ++i) {
            if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
                occ++;
        }
        if(occ!=7)
            cout<<"NO"<<nl;
        else
        {
            occ=0;
            for (int i = 0; i < s3.size(); ++i) {
                if(s3[i]=='a'||s3[i]=='e'||s3[i]=='i'||s3[i]=='o'||s3[i]=='u')
                    occ++;
            }
            if(occ!=5)
                cout<<"NO"<<nl;
            else
                cout<<"YES"<<nl;
        }
 
    }
    return 0;
    }
 