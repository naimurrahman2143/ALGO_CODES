#include <bits/stdc++.h>
using namespace std;

void printmatrix(int **p,int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int row;
    int column;
    cout<<"enter the row and column"<<endl;
    cin>>row>>column;

    int **m=new int *[row];
    for(int i=0;i<row;i++) m[i]=new int [column];

    printmatrix(m,row,column);
}
