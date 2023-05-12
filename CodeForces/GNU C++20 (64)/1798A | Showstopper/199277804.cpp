#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
 
int maxim(int *t,int n)
{
    int max=0;
    for (int i = 0; i < n; ++i) {
        if(t[max]<=t[i])
            max=i;
    }
    return max;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin>>b[i];
        }
        map<int,int>c;
        bool check=false;
        while(maxim(a,n)!=n-1||maxim(b,n)!=n-1)
        {
            if(maxim(a,n)==maxim(b,n))
                if(!c[maxim(a,n)])
                {
                    int j=maxim(a,n);
                    swap(a[maxim(a,n)],b[maxim(a,n)]);
                    c[j]++;
                }
                else
                {
                    check=true;
                    break;
                }
            else if((maxim(a,n)!=n-1)&&(maxim(a,n)!=n-1))
                if(c[maxim(a,n)]&c[maxim(b,n)])
                {
                    check=true;
                    break;
                }
                else if(!c[maxim(a,n)])
                {
                    int j=maxim(a,n);
                    swap(a[maxim(a,n)],b[maxim(a,n)]);
                    c[j]++;
                }
                else
                {
                    int j=maxim(b,n);
                    swap(a[maxim(b,n)],b[maxim(b,n)]);
                    c[j]++;
                }
            else if(maxim(a,n)!=n-1)
                if(!c[maxim(a,n)])
                {
                    int j=maxim(a,n);
                    swap(a[maxim(a,n)],b[maxim(a,n)]);
                    c[j]++;
                }
                else
                {
                    check=true;
                    break;
                }
            else
                if(!c[maxim(b,n)])
                {
                    int j=maxim(b,n);
                    swap(a[maxim(b,n)],b[maxim(b,n)]);
                     c[j]++;
                }
                else
                {
                    check=true;
                    break;
                }
        }
        if(check)
            cout<<"NO"<<nl;
        else
            cout<<"YES"<<nl;
    }
    return 0;
}
 
 