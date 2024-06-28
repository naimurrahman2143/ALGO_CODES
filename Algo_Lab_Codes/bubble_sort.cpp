#include <bits/stdc++.h>
using namespace std;

void printlist(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<"\n---------------"<<endl;

}

int *bubblesort(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }




    return a;
}
int main()
{
    int n=20;
    int *a=new int[n];

    ifstream fin("20.txt");

//read from file and save in array
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
     }
    printlist(a,n);
    int *p;
    p=bubblesort(a,n);
    printlist(p,n);


}

