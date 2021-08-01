#include <iostream>
#include <string>

using namespace std;

int maxN(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}

int maxNumber(string str, int max = -1, int index = 0)
{
	if (index >= str.length())
	{
		return max;
	}

	if (str[index] - '0' > max)
	{
		max = str[index] - '0';
	}

	return maxN(max, maxNumber(str, max, index + 1));
}

int main()
{
	string str;
	cin >> str;
	cout << maxNumber(str);
	return 0;
}