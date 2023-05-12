#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    unordered_set<char> a;
    for (int i = 0; i < s.size(); ++i) {
        a.insert(s[i]);
    }
    if (a.size()%2)
        cout<<"IGNORE HIM!"<<nl;
    else
        cout<<"CHAT WITH HER!"<<nl;
    return 0;
}