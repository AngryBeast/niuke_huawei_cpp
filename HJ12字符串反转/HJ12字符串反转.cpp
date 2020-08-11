#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
string String_inversion(string str);


int main()
{
	string str;
	cin >> str;
	cout << String_inversion(str);
	system("pause");
}

string String_inversion(string str) 
{
	char temp;
	for (int i = 0; i < str.size() / 2; i++)
	{
		temp = str[i];
		str[i] = str[str.size() - i -1];
		str[str.size() - i - 1] = temp;
	}

	return str;
}