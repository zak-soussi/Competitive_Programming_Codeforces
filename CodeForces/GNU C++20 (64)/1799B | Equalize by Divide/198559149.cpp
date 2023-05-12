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
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        int i = 0;
        for (; i < n-1; ++i) {
            if(a[i]!=a[i+1])
                break;
        }
        if(i==n-1)
            cout<<"0"<<nl;
        else {
            int min=a[0];
            int indice=0;
            bool check = true;
            int occ=0;
            vector<int>c;
            while (occ<=30*n) {
                for (int j = 0; j < n; ++j) {
                    if (a[j]<min){
                        indice=j;
                        min=a[j];}
                    if(min==1) {
                        check = false;
                        break;
                    }
                }
                if(!check)
                    break;
                for (int j = 0; j < n; ++j) {
                    if(a[j]!=min)
                    {
                        while (a[j]>min)
                        {
                            a[j]=a[j]%min?a[j]/min+1:a[j]/min;
                            occ++;
                            c.push_back(j+1);
                            c.push_back(indice+1);
                        }
                    }
                }
                int k = 0;
                for (; k < n-1; ++k) {
                    if(a[k]!=a[k+1])
                        break;
                }
                if(k==n-1)
                    break;
            }
            if(!check||occ>30*n)
                cout<<"-1"<<nl;
            else
            {
                cout<<occ<<nl;
                for (int j = 0; j < c.size(); j+=2) {
                    cout<<c[j]<<" "<<c[j+1]<<nl;
                }
            }
        }
    }
    return 0;
}
 
 