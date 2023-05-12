#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> a[i][j];
        }
    }
    int r=0;
    int c=0;
    for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if (a[i][j] == 1) {
                    r = i;
                    c = j;
                    break;
                }
            }
        }
    int res= abs(r-2)+ abs(c-2);
    cout<<res<<"\n";
 
    return 0;
}