#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("unice.in");
ofstream fout("unice.out");

int main()
{
    int n, x;
        fin >> n;
    int v[100] = {0};
        for (int i = 1; i <= n; i++)
        {
            fin >> x;
            v[x]++;
        }

        for(int i = 0; i < 100; i++)
        {
            if (v[i] == 1)
                fout << i << " ";
        }
    return 0;

}