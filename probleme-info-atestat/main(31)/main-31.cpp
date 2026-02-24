#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s[41];
	cin >> s;
	for (int i = 0; i < strlen(s); i++)
	{
		for (int j = 0; j < strlen(s); j++)
		{
			if (j != i)
				cout << s[j];
		}
		cout << endl;
	}
	return 0;
}