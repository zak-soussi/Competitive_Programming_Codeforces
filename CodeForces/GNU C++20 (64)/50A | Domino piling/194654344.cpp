#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n;
    cin>>m>>n;
    cout<< (n/2)*m+(n%2)*(m/2);   
    return 0;
}