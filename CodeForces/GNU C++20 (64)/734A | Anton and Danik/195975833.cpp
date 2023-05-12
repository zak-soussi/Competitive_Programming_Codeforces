#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int countA=0;
    int countB=0;
    for (int i = 0; i <n; ++i) {
        if(s[i]=='A')
            countA+=1;
        else
            countB+=1;
    }
    if(countA>countB)
        cout<<"Anton\n";
    else if(countA<countB)
        cout<<"Danik\n";
    else
        cout<<"Friendship\n";
    return 0;
}