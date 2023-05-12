#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> q;
        for (int i = 0; i < s.length(); ++i) {
            if (q.empty()) q.push(s[i]);
            else {
                if (s[i] == 'B') q.pop();
                else q.push(s[i]);
            }
 
        }
        cout << q.size() << endl;
    }
    return 0;
}
 
 