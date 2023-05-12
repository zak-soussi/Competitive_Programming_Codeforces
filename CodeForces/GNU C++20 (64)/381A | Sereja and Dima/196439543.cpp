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
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        int b;
        cin>>b;
        a.push_back(b);
    }
    int Ser=0;
    int dima=0;
    int occ;
    for (int i = 0; i < n; ++i) {
        if(a[0]>=a[a.size()-1])
        {
            occ=a[0];
            a.erase(a.begin());
        }
        else
        {
            occ=a[a.size()-1];
            a.erase(a.begin()+a.size()-1);
        }
        if(i%2)
            dima+=occ;
        else
            Ser+=occ;
    }
    cout<<Ser<<" "<<dima<<nl;
    return 0;
    }
 