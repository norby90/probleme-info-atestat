#include<fstream>
using namespace std;
ifstream fin("cifreord.in");
ofstream fout("cifreord.out");

int main()
{
    int n, fr[10] = {0}, cnt = 1, a;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a;
        fr[a]++;
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = 1; j <= fr[i]; j++)
        {
            fout << i << " ";
            if(cnt % 20 == 0) fout << endl;
            cnt++;
        }
    }
    return 0;
}