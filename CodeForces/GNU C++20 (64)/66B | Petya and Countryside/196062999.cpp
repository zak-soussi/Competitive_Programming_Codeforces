#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int res=0;
    int countleft=0;
    int countright=0;
    for (int i = 0; i < n; ++i) {
        for (int j = i-1; j >=0 ; --j) {
            if(a[j]>a[j+1])
                break;
            else
                countleft++;
        }
        for (int j = i+1; j < n; ++j) {
            if(a[j]>a[j-1])
                break;
            else
                countright++;
        }
        res=max(res,1+countright+countleft);
        countleft=0;
        countright=0;
    }
    cout<<res<<"\n";
    return 0;
}