#include<iostream>
using namespace std;

int fr[10];

int main()
{
    int n, a, S = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
       cin >> a;
        fr[a]++;
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 1; j <= fr[i]; j++)
        {
            S = S + (i * i * i);
        }
    }
    cout << S;
    return 0;
}

/*
3
24 120 51
*/