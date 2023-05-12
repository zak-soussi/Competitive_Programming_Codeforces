#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
int main()
{
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,vb,vs;
    cin>>n>>vb>>vs;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int xf,yf;
    cin>>xf>>yf;
    if(vs>vb)
        cout<<"2"<<nl;
    else
    {
        int i = 1;
        for (; i < n-1; ++i) {
            if(abs(xf-a[i])<=abs(xf-a[i+1]))
                break;
        }
        float t1x=(float )abs(a[i])/(float)vb;
        float t2x=(float )::sqrt(pow(yf,2)+ pow(xf-a[i],2))/(float )vs;
 
        float t1=t1x+t2x;
        float t2,t21,t22;
        int j = 1;
        int indice=i;
        for (; j < i; ++j) {
            t21=(float) ::sqrt(pow(yf,2)+ pow(xf-a[j],2))/(float )vs;
            t22=(float )abs(a[j])/(float)vb;
            t2=t21+t22;
            if(t2<t1)
            {
                indice=j;
                t1=t2;
            }
        }
        cout<<indice+1<<nl;
    }
    return 0;
}
 
 