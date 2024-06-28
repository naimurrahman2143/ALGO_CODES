#include<bits/stdc++.h>
using namespace std;

int *makedouble(int *p,int n)
{
    for(int i=0;i<n;i++) p[i]=p[i]*2;

    return p;
}

int main()
{
    int a[5]={10,20,30,40,50};
    printlist(a,5);
    int *k=insertbegin(a,5,100);
    printlist(k,5);
}
