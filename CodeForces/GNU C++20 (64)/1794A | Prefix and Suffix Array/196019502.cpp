#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k=2*n-2;
        string a[k];
        vector<string> b;
        int occ=0;
 
        for (int i = 0; i < k; ++i) {
            cin>>a[i];
        }
        for (int i = 0; i < k; ++i) {
            if(a[i].size()==n-1)
            {
                b.push_back(a[i]);
                occ++;
                if(occ==2)
                    break;
            }
        }
        string left=b[0];
        string right=b[1];
        reverse(right.begin(),right.end());
        int i = 0;
        for (i; i < right.size(); ++i) {
            if(right[i]!=left[i]) {
                cout << "NO\n";
                break;
            }
        }
        if(i==right.size())
            cout<<"YES\n";
    }
    return 0;
}