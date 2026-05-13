#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("maxcif.in");
ofstream fout("maxcif.out");

int main()
{
    int fr[10]={0},n, maxx = 0;
    while(fin >> n)
    {
        fr[n]++;
        if(fr[n] > maxx)
            maxx = fr[n];
    }
    for(int i = 0; i < 10; i++)
    {
        if(fr[i] == maxx)
            fout << i << " ";
    }
    
    return 0;
}