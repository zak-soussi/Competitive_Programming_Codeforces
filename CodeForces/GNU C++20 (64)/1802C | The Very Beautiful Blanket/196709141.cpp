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
    while (t--) {
        int n,m;
        cin>>n>>m;
 
        ll b[n][m]={0};
        int w=0;
        int coe=0;
        ll number=0;
        for (int i = 0; i < n / 2+n%2; ++i) {
            for (int j = 0; j <m/2+m%2 ; ++j) {
                for(int k=0;k<=3;k++)
                {
                    if(k<2&&2*j+k<m)
                    {
                        b[2*i][2*j+k]=number+w;
 
                    }
                    else if(k>=2&&2*j+k-2<m&&2*i+1<n)
                    {
                        b[2*i+1][2*j+k-2]=number+w;
 
                    }
                    w++;}
 
            }
            w=0;
            number+=512;
        }
        cout<<n*m<<nl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout<<b[i][j]<<" ";
            }
            cout<<nl;
        }
    }
    return 0;
}