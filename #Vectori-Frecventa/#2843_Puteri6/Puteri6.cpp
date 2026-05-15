#include <fstream>
using namespace std;
ifstream fin("puteri6.in");
ofstream fout("puteri6.out");

int n, i, x, v[10];

int main()
{
    fin >> n;
    int p;
    while(fin >> x)
    {
        p = 0;
        while(x)
        {
            p++;
            x /= 10;
        }
        v[p]++;
    }
    bool gasit = false;
    x = 0;
    while(i < 10 && gasit == false)
    {
        while(v[i] != 0 && x != n)
        {
            x++;
            v[i]--;
        }
        if(x == n)
            gasit = true;
        i++;
    }
    if(gasit)
        {
            fout << 1;
            for(int j = 1; j < i-1;j++)
                fout << 0;
        }
    else fout << "Nu exista";

    return 0;
}