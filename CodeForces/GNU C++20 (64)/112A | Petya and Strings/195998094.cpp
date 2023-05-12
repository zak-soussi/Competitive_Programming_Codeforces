#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    string b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    int i = 0;
    for (i; i < a.size(); ++i) {
        if(a[i]<b[i])
        {
            cout<<"-1\n";
            break;
        }
        else if(a[i]>b[i])
        {
            cout<<"1\n";
            break;
        }
    }
    if(i==a.size())
        cout<<"0\n";
    return 0;
}