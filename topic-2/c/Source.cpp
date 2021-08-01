#include <iostream>
#include <string>

using namespace std;

int countN(string str, int count = 0, int index = 0)
{
	if (index >= str.length())
	{
		return count;
	}
	if (str[index] >= '0' && str[index] <= '9')
	{
		count++;
	}
	return countN(str, count, index + 1);
}

int main()
{
	string str;
	cin >> str;
	cout << countN(str);
	return 0;
}