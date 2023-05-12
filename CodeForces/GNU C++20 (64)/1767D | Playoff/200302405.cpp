#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
const char nl='\n';
const int infiniint=INT_MAX;
const ll infinill=LONG_LONG_MAX;
using namespace std;
ll power_no_mod(ll a, ll b) {
    ll result = 1;
    while (b) {
        if (b&1) result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}
ll power_with_mod(ll a, ll b,ll m) {
    ll result = 1;
    while (b) {
        if (b&1) result =(result*a)%m;
        a = (a*a)%m;
        b /= 2;
    }
    return result;
}
template <typename  type>
struct mycomp {
    bool operator()(const type & first,const type & second) const{
        /*write whatever code you want here in order to have the wanted sorting logic,
        for exp return first<second; : this will work as by default sorting(increasing order),
         you can use first.first(if you are working with pair),
         when using this function in a structure, write: mycomp<type that it will work with>
         */
    }
};
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int n;
    string s;
    cin>>n>>s;
    int count=0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='1')
            count++;
    }
    for (int i = pow(2,count); i <= pow(2,n)-pow(2,(n-count))+1; ++i) {
        cout<<i<<" ";
    }
    cout<<nl;
    return 0;
}