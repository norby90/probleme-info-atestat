#include<iostream>
#include<fstream>
using namespace std;

ifstream fin("date.txt");
ofstream fout("date_out.txt");

int main()
{
    int n, m;
    fin >> n >> m;
    int a[5000], b[5000];
        for(int i = 0; i < n; i++)
            fin >> a[i];
        for(int i = 0; i < m; i++)
            fin >> b[i];
    int i = 0, j = 0;

    while(i < n && j < m)
    {
        if(a[i] < b[i])
        {
            fout << a[i] << " ";
            i++;
        }
    }

    if(j == m)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}