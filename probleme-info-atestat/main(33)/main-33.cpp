#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("siruri.in");


    int m, n, p;
    fin >> m >> n >> p;

    int a[1001], b[1001], c[1001];

    for (int i = 0; i < m; i++)
        fin >> a[i];

    for (int i = 0; i < n; i++)
        fin >> b[i];

    for (int i = 0; i < p; i++)
        fin >> c[i];

    int i = 0, j = 0, k = 0;

    while (i < m && j < n && k < p)
        {
            if (a[i] == b[j] && b[j] == c[k])
                {
                    cout << "Valoare comuna:" << a[i] << endl;

                    cout << "Pozitiile pe care apare in cele trei siruri:" << " " << i + 1 << " " << j + 1 << " " << k + 1;
                    break;
                }

            if (a[i] <= b[j] && a[i] <= c[k])
                i++;
            else if (b[j] <= a[i] && b[j] <= c[k])
                j++;
            else
                k++;
        }
    fin.close();

        return 0;
}