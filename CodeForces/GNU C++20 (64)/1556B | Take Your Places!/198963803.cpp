#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
 
 
void parcoursimpaire(int *a,int n,priority_queue<int, vector<int>, greater<>> qimpaire, priority_queue<int, vector<int>, greater<>> qpaire,ll *occ) {
    for (int i = 0; i < n; ++i) {
        if((i&1)!=(a[i]&1)) {
            if(!(i&1))
                qimpaire.pop();
            else
                qpaire.pop();
        }
        else
        {
            if(!(i&1))
            {
                (*occ)+=qimpaire.top()-i;
                qpaire.pop();
                qpaire.push(qimpaire.top());
                a[qimpaire.top()]=a[i];
                qimpaire.pop();
            }
            else
            {
                (*occ)+=qpaire.top()-i;
                qimpaire.pop();
                qimpaire.push(qpaire.top());
                a[qpaire.top()]=a[i];
                qpaire.pop();
 
            }
        }
    }
}
 
void parcourspaire(int *a,int n,priority_queue<int, vector<int>, greater<>> qimpaire, priority_queue<int, vector<int>, greater<>> qpaire,ll *occ) {
    for (int i = 0; i < n; ++i) {
        if((i&1)==(a[i]&1)) {
            if(!(i&1))
                qpaire.pop();
            else
                qimpaire.pop();
        }
        else
        {
            if(i&1)
            {
                (*occ)+=qimpaire.top()-i;
                qpaire.pop();
                qpaire.push(qimpaire.top());
                a[qimpaire.top()]=a[i];
                qimpaire.pop();
            }
            else
            {
                (*occ)+=qpaire.top()-i;
                qimpaire.pop();
                qimpaire.push(qpaire.top());
                a[qpaire.top()]=a[i];
                qpaire.pop();
 
            }
        }
    }
}
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int odd = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] & 1)
                odd++;
        }
        if ((!(n & 1) && (odd != n / 2)) || ((n & 1) && ((odd - n / 2) != 0 && (odd - n / 2) != 1)))
            cout << "-1" << nl;
        else if (n == 1 || n == 2)
            cout << "0" << nl;
        else {
            ll occ = 0;
            ll occ1 = 0;
            priority_queue<int, vector<int>, greater<>> qimpaire;
            priority_queue<int, vector<int>, greater<>> qpaire;
            for (int i = 0; i < n; ++i) {
                if (a[i] & 1)
                    qimpaire.push(i);
                else
                    qpaire.push(i);
            }
            if ((n & 1) && odd > n / 2) {
                parcoursimpaire(a, n, qimpaire, qpaire, &occ);
                cout << occ << nl;
            } else if ((n & 1) && odd == n / 2) {
                parcourspaire(a, n, qimpaire, qpaire, &occ);
                cout << occ << nl;
            } else {
 
                int b[n];
                for (int i = 0; i < n; ++i) {
                    b[i] = a[i];
                }
                parcoursimpaire(a, n, qimpaire, qpaire, &occ);
                parcourspaire(b, n, qimpaire, qpaire, &occ1);
                cout << min(occ, occ1) << nl;
            }
        }
    }
    return 0;
}