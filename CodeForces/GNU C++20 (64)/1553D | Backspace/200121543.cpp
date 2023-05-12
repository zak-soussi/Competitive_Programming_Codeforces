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
    int q;
    cin>>q;
    while (q--)
    {
        string s,t;
        cin>>s>>t;
        if(t.size()>s.size()||(t.size()==s.size())&&t!=s)
            cout<<"NO"<<nl;
        else {
            int indice=t.size()-1;
            int i = s.size()-1;
            for (; i >=0 ; --i) {
             if(s[i]==t[indice]) {
                if(!indice)
                    break;
                 indice--;
             }
             else
                 i--;
            }
            if(i<0)
                cout<<"NO"<<nl;
            else
                cout<<"YES"<<nl;
        }
 
    }
    return 0;
}