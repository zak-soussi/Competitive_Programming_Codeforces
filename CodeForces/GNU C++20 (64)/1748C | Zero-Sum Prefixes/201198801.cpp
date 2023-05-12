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
        /*
        write whatever code you want here in order to have the wanted sorting logic,
        for exp return first<second; : this will work as by default sorting(increasing order),
         you can use first.first(if you are working with pair),
         when using this function in a structure, write: mycomp<type that it will work with>
         */
    }
};
void coordinate_compress(vector<int> &initial, vector<int> &iToV, map<int , int> &vToI, int start =0 , int step =1){
        /*
        nst3mlouha bch ncompressiw vecteur mt3na,m3neha f 3oudh mat5dm 3ala vecteur kobro 10 7 w tjik mle,
        n5dhou ken les indices eli 7chtna behom w nsortiwhom w nsn3ou mnhom tab s4ir fih des indices s4ar
        en relation b les indices l7a9aniyin
        initial yod5l b les valeurs mahomch mratbin ma3ndhom 7ata 3ala9a w yo5rj b les indices mt3 les valeurs edhoukom
        f tab jdid
        */
        for (auto &x_pos : initial)
            vToI[x_pos]=0;
        iToV.resize(start + step * vToI.size());
        int idx = 0;
        for (auto &entry : vToI)
        {
            entry .second =start + step *idx;
            iToV [entry .second ] =entry.first;
            ++idx;
        }
        for (auto &x_pos : initial)
            x_pos =vToI[x_pos];
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    int comp=0;
    while (t--)
    {
        comp++;
        ll n;
        cin>>n;
        ll a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
//        if(comp==223)
//            cout<<a[0]<<nl;
//        else {
            ll b[n];
            ll residu = 0;
            ll occ=0;
            int j;
            ll plusrepete;
            map<ll, ll> c;
            partial_sum(a, a + n, b);
            for (int i = 0; i < n; ++i) {
                if (!a[i]) {
                    c[b[i] + residu]++;
                    j = i + 1;
                    for (; j < n; j++) {
                        if (!a[j])
                            break;
                        c[b[j] + residu]++;
                    }
                    plusrepete = infinill;
                    for (auto w: c) {
                         if (w.second >= c[plusrepete])
                            plusrepete = w.first;
                    }
                    if(c[plusrepete]==1)
                        plusrepete=b[i]+residu;
                    a[i] = -plusrepete;
                    residu += a[i];
                    c.clear();
                    i = j-1;
                }
            }
            partial_sum(a, a + n, b);
            for (auto i: b)
                if (!i)
                    occ++;
            cout << occ << nl;
        }
  // }
    return 0;
}