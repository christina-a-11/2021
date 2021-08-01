#include <iostream>
#include <string>

using namespace std;

void countStr(string str, int index = 0)
{
	if (index >= str.length() - 1)
	{
		cout<< str[index];
		return;
	}
	cout << str[index] << "*";
	return countStr(str, index + 1);
}

int main()
{
	string str;
	cin >> str;
	countStr(str);
	return 0;
}