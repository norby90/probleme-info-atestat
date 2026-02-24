#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s[256];
	cin >> s;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == 'z')
		{
			s[i] = s[i] - 26;
		}
		s[i] = s[i] + 1;
	}
	cout << s;
	return 0;
}