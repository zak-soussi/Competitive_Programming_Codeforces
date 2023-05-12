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
    int n,m,p;
    cin>>n>>m>>p;
    int a[n+1];
    int b[m+1];
    for (int i = 1; i <= n; ++i) {
        cin>>a[i];
    }
    map<int,int>occ;
    for (int i = 1; i <= m; ++i) {
        cin>>b[i];
        occ[b[i]]++;
    }
    if((m>n)||((m==n)&&(p!=1)))
        cout<<"0"<<nl;
    else {
        map<int,int>occ1;
        set<int>res;
        int i;
        int sum = 0;
        int j;
        for (int k = 1; k < 1+p; k ++) {
            i=k;
            j=k;
            while(j<1+n)
            {
                if(!occ[a[j]])
                {
                    i=j+p;
                    j+=p;
                    sum=0;
                    occ1.clear();
                }
                else
                {
                    if(occ1[a[j]]<occ[a[j]])
                    {
                        occ1[a[j]]++;
                        sum++;
                        if(sum==m)
                        {
                            res.insert(i);
                            occ1[a[i]]--;
                            sum--;
                            i+=p;
 
                        }
                        j+=p;
                    }
                    else
                    {
                        occ1[a[j]]++;
                        sum++;
                        while (occ1[a[j]]>occ[a[j]])
                        {
                            occ1[a[i]]--;
                            sum--;
                            i+=p;
                        }
                        j+=p;
                    }
                }
            }
            sum=0;
            occ1.clear();
        }
        cout<<res.size()<<nl;
        for(auto c:res)
            cout<<c<<" ";
        cout<<nl;
    }
    return 0;
}