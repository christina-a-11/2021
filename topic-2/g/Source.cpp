#include <iostream>
#include <string>

using namespace std;

void coutStr(string str, int index = 0)
{
	if (index == str.length() / 2 && str.length() % 2 != 0)
	{
		cout << str[index];
	}
	if (index >= str.length())
	{
		return;
	}
	if (str[index] != str[str.length() - index - 1])
	{
		cout << str[index];
	}
	coutStr(str, index + 1);
}

int main()
{
	string str;
	cin >> str;
	coutStr(str);
	return 0;
}