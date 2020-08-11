// HJ13句子逆序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring> 　
using namespace std;

int main()
{
	char c[1000];
	int count = 0;
    string str;
	string result[100];


    cin >> c;
	//strcpy(c, str.c_str());
	char* tokenPtr = strtok(c, " ");
	cout << endl << c << endl;
	while (tokenPtr != NULL)	
	{
		cout << tokenPtr << '\n';
		result[count] = tokenPtr;
		tokenPtr = strtok(NULL, " ");
	}

	for (int i = count; i > 0; i--)
	{
		cout << result[count] << ' ';
	}
	system("pause");
}