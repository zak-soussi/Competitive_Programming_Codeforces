#include <bits/stdc++.h>
 
#pragma GCC target("bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
typedef long long ll;
typedef long double ld;
#define pi pair<int,int>
#define pll pair<ll,ll>
#define all(x) x.begin(), x.end()
const char nl = '\n';
const int infiniint = INT_MAX;
const ll infinill = LONG_LONG_MAX;
using namespace std;
 
ll power_no_mod(ll a, ll b) {
    ll result = 1;
    while (b) {
        if (b & 1) result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}
 
ll power_with_mod(ll a, ll b, ll m) {
    ll result = 1;
    while (b) {
        if (b & 1) result = (result * a) % m;
        a = (a * a) % m;
        b /= 2;
    }
    return result;
}
 
template<typename type>
struct mycomp {
    bool operator()(const type &first, const type &second) const {
        /*
        write whatever code you want here in order to have the wanted sorting logic,
        for exp return first<second; : this will work as by default sorting(increasing order),
         you can use first.first(if you are working with pair),
         when using this function in a structure, write: mycomp<type that it will work with>
         */
    }
};
 
void coordinate_compress(vector<int> &initial, vector<int> &iToV, map<int, int> &vToI, int start = 0, int step = 1) {
    /*
    nst3mlouha bch ncompressiw vecteur mt3na,m3neha f 3oudh mat5dm 3ala vecteur kobro 10 7 w tjik mle,
    n5dhou ken les indices eli 7chtna behom w nsortiwhom w nsn3ou mnhom tab s4ir fih des indices s4ar
    en relation b les indices l7a9aniyin
    initial yod5l b les valeurs mahomch mratbin ma3ndhom 7ata 3ala9a w yo5rj b les indices mt3 les valeurs edhoukom
    f tab jdid
    */
    for (auto &x_pos: initial)
        vToI[x_pos] = 0;
    iToV.resize(start + step * vToI.size());
    int idx = 0;
    for (auto &entry: vToI) {
        entry.second = start + step * idx;
        iToV[entry.second] = entry.first;
        ++idx;
    }
    for (auto &x_pos: initial)
        x_pos = vToI[x_pos];
}
 
bool isPrime(ll n) {
    if (n == 1) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
 
//use this to determine the primes <= n in O(n log(log n))
void sieve(ll n, vector<ll> &occprime) {
    vector<bool> isPrime(n + 1, true);    // set all of them to primes
    isPrime[0] = isPrime[1] = false;        // 0, 1 are not primes
 
    for (ll i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (ll j = i * 2; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    for (ll i = 2; i <= n; i++)
        if (isPrime[i])
            occprime.push_back(i);
}
 
//use this to determine the smallest prime factor of each number from 1 to spf.size()-1
//then we are going to use the vector spf with getFactorization method(the next defined method)
//in order to determine the prime factors of a certain number n in O(log n)
void sieve_smallest_prime_factor(vector<int> &spf) {
    spf[1] = 1;
    for (int i = 2; i < spf.size(); i++)
 
        // marking the smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (int i = 4; i < spf.size(); i += 2)
        spf[i] = 2;
 
    for (int i = 3; i * i < spf.size(); i++) {
        // checking if i is prime
        if (spf[i] == i) {
            // marking SPF for all numbers divisible by i
            for (int j = i * i; j < spf.size(); j += i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}
 
 
//we use this method with sieve_smallest_prime_factor in order to determine the prime factors of a certain number n in O(log n)
void getFactorization(ll x, vector<ll> &spf) {
    while (x != 1) {
        //do whatever you like with each prime divisor
        //write code here
        x = x / spf[x];
    }
}
 
 
bool valid(ll i, ll j, ll n, ll m) {
    return i < n && i >= 0 && j < m && j >= 0;
}
 
 
int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
//    ::freopen("...","r",stdin);  // use this with input files
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a;
        bitset<32> b;
//        int bitmax=0;
        vector<int> count (34,0);
        for (int i = 0; i < n; ++i) {
            cin>>a;
            b=bitset<32>(a);
//            bitmax= max(bitmax,(int)b.size());
            for (int j = 0; j < 32; ++j) {
                if(b[j])
                    count[j]++;
            }
        }
        for (int i = 1; i <= n ; ++i) {
            int j = 0;
            for (; j < 32; ++j) {
                if(count[j]%i)
                    break;
            }
            if(j==32)
                cout<<i<<" ";
        }
        cout<<nl;
    }
    return 0;
}