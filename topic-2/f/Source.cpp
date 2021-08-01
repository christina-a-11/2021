#include <iostream>
#include <string>

using namespace std;

void coutStr(string str, int index = 0)
{
	if (index >= str.length())
	{
		return;
	}
	cout << str[index];

	coutStr(str, index + 1);

	cout << (str[index] == '(' ? ')' : str[index]);
}

int main()
{
	string str;
	cin >> str;
	coutStr(str);
	return 0;
}