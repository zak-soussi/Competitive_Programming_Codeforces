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
    string s;
    cin>>s;
    char b[n];
 
    int index;
    if(n%2)
        index=n/2;
    else
        index=n/2-1;
 
    if(n>2) {
 
        for (int i = 0; i < s.size(); ++i) {
            if (i % 2 == 0) {
                b[index] = s[i];
                index = index +i+1;
            } else {
                b[index] = s[i];
                index=index-i-1;
            }
        }
        if(n%2==0)
            for (int i = 0; i < n; ++i) {
                cout << b[i];
            }
        else
            for (int i = n-1; i >=0 ; --i) {
                cout<<b[i];
            }
    }
 
    else
        cout<<s;
 
    return 0;
}