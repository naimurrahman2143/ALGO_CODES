#include <bits/stdc++.h>
using namespace std;

void printlist(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<"--------------->"<<endl;

}

int *shiftleft(int *a, int n,int k)
{
    for(int j=0;j<k;j++)
    {
        for(int i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
    }
    for(int i=n-k;i<n;i++)
    {
        a[i]=0;
    }
    return a;
}


int main()
{
    int n=10000;
    int *a=new int[n];

    ifstream fin("10k-shift.txt");

//read from file and save in array
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
     }
    printlist(a,n);
    int *m=shiftleft(a,n,9000);
    printlist(m,n);


}