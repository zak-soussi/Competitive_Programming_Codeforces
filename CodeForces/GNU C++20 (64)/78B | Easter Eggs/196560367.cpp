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
    char a[7];
    a[0]='R';
    a[1]='O';
    a[2]='Y';
    a[3]='G';
    a[4]='B';
    a[5]='I';
    a[6]='V';
    vector<char>t;
    for (int i = 0; i < n/7; ++i) {
        for (int j = 0; j < 7; ++j) {
            t.push_back(a[j]);
        }
    }
    int k=n%7;
    if(k<=4)
        for (int i = 0; i < k; ++i) {
            t.push_back(a[i+3]);
        }
    else
        for (int i = 0; i < k; ++i) {
            t.push_back(a[i]);
        }
    for (int i = 0; i < t.size(); ++i) {
        cout<<t[i];
    }
    cout<<nl;
    return 0;
    }
 