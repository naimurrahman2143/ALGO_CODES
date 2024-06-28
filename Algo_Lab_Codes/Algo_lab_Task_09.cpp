#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    int a;
    int n;
    ofstream fout("marks.txt");//output file stream is
    for(int i=0;i<10000;i++)
    {
        a=rand()%6+1;
        fout<<a<<endl;
    }
}
