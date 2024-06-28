#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    int a;
    int n=20;
    ofstream fout("20.txt");//output file stream is
    for(int i=0;i<n;i++)
    {
       a=rand();
       fout<<a<<endl;
    }

}
