#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");

int fr[10] = {0}, nr;
int main()
{
    while(fin >> nr) 
    {
        fr[nr]++;
    }

    if(fr[7])
    {
        fout << 7 << ' ' << fr[7];
    }

    else if(fr[5])
    {
        fout << 5 << ' ' << fr[5];
    }

    else if(fr[3])
    {
        fout << 3 << ' ' << fr[3];
    }

    else if(fr[2])
    {
        fout << 2 << ' ' << fr[2];
    }

    return 0;
}