#include <bits/stdc++.h>
typedef long long ll;
const char nl='\n';
using namespace std;
 
void DR(int *a ,int *b)
{
    (*a)++;
    (*b)++;
}
 
void DL(int *a ,int *b)
{
    (*a)++;
    (*b)--;
}
 
void UR(int *a ,int *b)
{
    (*a)--;
    (*b)++;
}
 
void UL(int *a ,int *b)
{
    (*a)--;
    (*b)--;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int  n,m,i1,j1,i2,j2;
        string s;
        cin>> n>>m>>i1>>j1>>i2>>j2>>s;
        int y,z;
 
        i1--;
        j1--;
        i2--;
        j2--;
        y=i1;
        z=j1;
        string s1=s;
        int bounce=0;
        int diag=0;
        string a=s;
        if((i1==i2)&&(j1==j2))
            cout<<"0"<<nl;
        else
        {
            if(i1==0&&j1==0&&a!="DR")
            {
                a="DR";
                bounce++;
                diag++;
            }
            else if(i1==0&&j1==m-1&&a!="DL")
            {
                a="DL";
                bounce++;
                diag++;
            }
            else if(i1==n-1&&j1==0&&a!="UR")
            {
                a="UR";
                bounce++;
                diag++;
            }
            else if(i1==n-1&&j1==m-1&&a!="UL")
            {
                a="UL";
                bounce++;
                diag++;
            }
            else
            {
                if(i1==n-1)
                {
                    if(a=="DR")
                    {
                        bounce++;
                        a="UR";
                    }
                    else if(a=="DL")
                    {
                        bounce++;
                        a="UL";
 
                    }
                }
                else if(!i1)
                {
                    if(a=="UR")
                    {
                        bounce++;
                        a="DR";
                    }
                    else if(a=="UL")
                    {
                        bounce++;
                        a="DL";
 
                    }
 
                }
                else if(j1==0)
                {
                    if(a=="UL")
                    {
                        bounce++;
                        a="UR";
                    }
                    else if(a=="DL")
                    {
                        bounce++;
                        a="DR";
 
                    }
 
                }
                else if(j1==m-1)
                {
                    if(a=="UR")
                    {
                        bounce++;
                        a="UL";
                    }
                    else if(a=="DR")
                    {
                        bounce++;
                        a="DL";
 
                    }
 
                }
            }
            int occ=0;
            while (diag!=2&&occ<100000)
            {
 
                if(a=="DL")
                    DL(&i1,&j1);
                else if(a=="DR")
                    DR(&i1,&j1);
                else if (a=="UL")
                    UL(&i1,&j1);
                else if(a=="UR")
                    UR(&i1,&j1);
                if((i1==i2)&&(j1==j2))
                    break;
                else if(i1==0&&j1==0)
                {
                    a="DR";
                    bounce++;
                    occ++;
                    diag++;
                }
                else if(i1==0&&j1==m-1)
                {
                    a="DL";
                    bounce++;
                    occ++;
                    diag++;
                }
                else if(i1==n-1&&j1==0)
                {
                    a="UR";
                    bounce++;
                    occ++;
                    diag++;
                }
                else if(i1==n-1&&j1==m-1)
                {
                    a="UL";
                    bounce++;
                    occ++;
                    diag++;
                }
                else
                {
                    if(i1==n-1)
                    {
                        bounce++;
                        occ++;
                        if(a=="DL")
                            a="UL";
                        else
                            a="UR";
                    }
                    else if(!i1)
                    {
                        bounce++;
                        occ++;
                        if(a=="UL")
                            a="DL";
                        else
                            a="DR";
                    }
                    else if(j1==0)
                    {
                        bounce++;
                        occ++;
                        if(a=="UL")
                            a="UR";
                        else
                            a="DR";
                    }
                    else if(j1==m-1)
                    {
                        bounce++;
                        occ++;
                        if(a=="UR")
                            a="UL";
                        else
                            a="DL";
                    }
                }
                if((i1==y)&&(j1==z)&&(a==s1))
                    break;
 
            }
            if(occ==100000)
                cout<<"-1"<<nl;
            else
            {
                if((i1==i2)&&(j1==j2))
                    cout<<bounce<<nl;
                else
                    cout<<"-1"<<nl;
            }
        }
    }
    return 0;
}