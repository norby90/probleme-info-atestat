#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("cifreord1.in");
ofstream fout("cifreord1.out");
int main() 
{
    int frecv[10] = {0};
    long long x;
    while (fin >> x) {
        if (x == 0) {
            frecv[0]++;
        }
        while (x > 0) {
            frecv[x % 10]++;
            x /= 10;
        }
    }

    int cnt = 0;
    for (int i = 9; i >= 0; i--)
    {
        for (int j = 1; j <= frecv[i]; j++) 
        {
            fout << i;
            cnt++;

            if (cnt % 20 == 0) 
            {
                fout << '\n';
            } 
            else 
            {
                fout << ' ';
            }
        }
    }
    return 0;
}