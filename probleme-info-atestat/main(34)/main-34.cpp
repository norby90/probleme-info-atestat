#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[251];
    cin >> s;

    char rezultat[251];
    int k = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (strchr("aeiou", s[i]) == NULL) {
            rezultat[k++] = s[i];
        }
    }

    rezultat[k] = '\0';

    cout << rezultat;

    return 0;
}