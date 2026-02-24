#include <iostream>

using namespace std;

bool eFibo(long long n) {
    if (n < 0) return false;
    if (n == 0 || n == 1) return true;

    long long a = 0, b = 1;
    long long urm = a + b;

    while (urm <= n) {
        if (urm == n) return true;
        a = b;
        b = urm;
        urm = a + b;
    }

    return false;
}

int main() {
    long long n;
    cin >> n;

    if (eFibo(n))
        cout << n << " Apartine sirului Fibonacci" << endl;
    else
        cout << n << " NU apartine sirului lui Fibonacci." << endl;

    return 0;
}
