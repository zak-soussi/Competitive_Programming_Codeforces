#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int comp=n;
    map<int,int>b;
    for (int i = 0; i < n; ++i) {
        if(a[i]!=comp) {
            b[a[i]]++;
            cout<<nl;
        }
        else
        {
            cout<<comp<<" ";
            while(b[comp-1])
            {
                cout<<comp-1<<" ";
                comp--;
            }
            comp--;
            cout<<nl;
        }
 
    }
    return 0;
}
 
 