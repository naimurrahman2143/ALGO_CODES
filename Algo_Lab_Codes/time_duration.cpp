#include <bits/stdc++.h>
#include<chrono>
using namespace std;

void printlist(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<"/n---------------"<<endl;

}

int *bubblesort(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(p[j]>p[j+1]) swap(p[j],p[j+1]);

        }
    }




    return p;
}
int main()
{
    int n=5000;
    int *a=new int[n];

    ifstream fin("20.txt");

//read from file and save in array
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
     }
    //printlist(a,n);
    auto start=high_resolution_clock::now();
    int *m=bubblesort(a,n);
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<miliseconds>(stop - start);
    cout<<duration.count()<<endl;
    //printlist(a,n);


}
