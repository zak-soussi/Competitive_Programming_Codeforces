#include <bits/stdc++.h>
using namespace std;
 
long long YetAnotherPromotion(int a,int b,int m,int n)
{
    long long pDay1=(long long)a;
    long long pDay2=(long long)b;
    long long required=(long long)m;
    long long toHaveProm=(long long)n;
 
    if(pDay1<pDay2)
        return((required/(toHaveProm+1))*toHaveProm*pDay1+(required%(toHaveProm+1))*pDay1);
    else if(toHaveProm*pDay1>=(toHaveProm+1)*pDay2)
        return(pDay2*required);
    else if(toHaveProm*pDay1<(toHaveProm+1)*pDay2)
        return((required/(toHaveProm+1))*toHaveProm*pDay1+(required%(toHaveProm+1))*pDay2);
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,a,b,m,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cin>>m>>n;
        cout<<YetAnotherPromotion(a,b,m,n)<<"\n";
    }
    return 0;
}