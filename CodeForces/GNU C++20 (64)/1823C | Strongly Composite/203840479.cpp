#include <bits/stdc++.h>
#pragma GCC target("bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
typedef long long ll;
typedef long double ld;
#define pi pair<int,int>
#define pll pair<ll,ll>
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
void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
 
    //!!!! if you have a prime number>2, you have to work on it here
    if (n > 2)
        cout << n << " ";
}
 
void primeFactors(int n,map<int,int> & occ)
{
    ll w=0;
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        occ[2]++;
//        cout << 2 << " ";
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        w=0;
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            occ[i]++;
//            cout << i << " ";
            n = n/i;
        }
 
    }
 
    //!!!! if you have a prime number>2, you have to work on it here
    if (n > 2)
        //cout << n << " ";
        occ[n]++;
}
 
 
 
 
 
 
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int t=1;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>a(n);
        map<int,int>occ;
        ll res=0,residu=0;
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
            primeFactors(a[i],occ);
        }
        for(auto i:occ)
        {
            res+=i.second/2;
            residu+=i.second%2;
        }
        cout<<res+residu/3<<nl;
    }
    return 0;
}