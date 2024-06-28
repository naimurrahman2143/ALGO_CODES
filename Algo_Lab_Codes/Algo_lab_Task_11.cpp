#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int a;
    int n=10000;
    ofstream fout("10k-shift.txt");//output file stream is
    for(int i=0;i<n;i++)
    {
        a=rand();
        fout<<a<<endl;
    }
}
