#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    char d;
    cin>>n>>m>>d;
    char a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
        }
    }
    map<char,int>c;
    int res=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(a[i][j]==d)
            {
                if(j+1<m&&a[i][j+1]!=d&&a[i][j+1]!='.')
                    if(!c[a[i][j+1]])
                    {
                        res++;
                        c[a[i][j+1]]++;
                    }
                if(i+1<n&&a[i+1][j]!=d&&a[i+1][j]!='.')
                    if(!c[a[i+1][j]])
                    {
                        res++;
                        c[a[i+1][j]]++;
                    }
                if(j-1>=0&&a[i][j-1]!=d&&a[i][j-1]!='.')
                    if(!c[a[i][j-1]])
                    {
                        res++;
                        c[a[i][j-1]]++;
                    }
                if(i-1>=0&&a[i-1][j]!=d&&a[i-1][j]!='.')
                    if(!c[a[i-1][j]])
                    {
                        res++;
                        c[a[i-1][j]]++;
                    }
 
            }
        }
    }
    cout<<res<<nl;
    return 0;
}
 
 