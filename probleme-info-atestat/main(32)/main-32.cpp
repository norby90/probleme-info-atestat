#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    bool first = true;
    for (int k = 30; k >= 0; k--) 
    {           
        if (n & (1 << k)) 
        {
            if (!first) cout << ' ';
            cout << k;
            first = false;
        }
    }
    return 0;
}