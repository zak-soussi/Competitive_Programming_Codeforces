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
        int occ1=0;
        int confirmed=0;
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        int maxi=0;
        int placemanque=0;
        for (int i = 0; i < n; ++i) {
            if(a[i]==2)
            {
                int w=occ1;
                maxi= max(maxi,confirmed+placemanque+w);
 
                if(occ1>=3)
                {
                    placemanque+=occ1/3;
                    confirmed+=occ1/3;
 
                    occ1%=3;
                    while(placemanque>=3)
                    {
                        int k=placemanque/3;
                        confirmed+=placemanque/3;
                        placemanque=k+placemanque%3;
                    }
                    if(occ1==1&&placemanque==2)
                    {
                        confirmed++;
                        placemanque--;
                        occ1=0;
                    }
                    if(occ1==2&&placemanque==1)
                    {
                        placemanque--;
                        confirmed++;
                        occ1--;
                    }
                    if(occ1==2&&placemanque==2)
                    {
                        confirmed++;
                        occ1--;
                        placemanque--;
                    }
 
                }
                else if(occ1==1&&placemanque==2)
                {
                    confirmed++;
                    placemanque--;
                     occ1=0;
                }
                else if(occ1==2&&placemanque==1)
                {
                    placemanque--;
                    confirmed++;
                    occ1--;
                }
                else if(occ1==2&&placemanque==2)
                {
                    confirmed++;
                    occ1--;
                    placemanque--;
                }
            }
            else
                occ1++;
        }
        cout<<max(maxi,confirmed+occ1+placemanque)<<nl;
    }
    return 0;
    }
 