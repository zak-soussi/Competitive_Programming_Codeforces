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
bool isPrime(ll n) {
    if (n == 1) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while (t--)
    {
        int m;
        cin>>m;
        unordered_map<int,int>possibwinner;
        for (int i = 1; i <= m; ++i) {
            int n;
            cin>>n;
            int f;
            for (int j = 0; j < n; ++j) {
                cin>>f;
                possibwinner[f]=i;
            }
        }
        vector<pair<int,int>>final;
        transform(possibwinner.begin(),possibwinner.end(), back_inserter(final),
        [](const std::pair<int,int>& p) {
            return std::make_pair(p.second, p.first);
        });
        sort(final.begin(),final.end());
        auto comp = [](const std::pair<int, int>& lhs, int rhs) {
            return lhs.first < rhs;
        };
        vector<int>aaaa;
        int y = 1;
        for (; y <=m ; ++y) {
            auto ind= lower_bound(final.begin(),final.end(),y,comp);
            if(ind==final.end()||(ind->first!=y))
                break;
            aaaa.push_back(ind->second);
        }
        if(y>m)
        {
            for(int i:aaaa)
                cout<<i<<" ";
            cout<<nl;
        }
        else
            cout<<"-1"<<nl;
    }
    return 0;
}