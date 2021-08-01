#include <iostream>
//gcd
using namespace std;

int gcd(int a, int b)
{
	if (a * b == 0)
	{
		return a + b;
	}
	else if (a > b)
	{
		return gcd(a % b, b);
	}
	else if (b > a)
	{
		return gcd(b % a, a);
	}
}

int main()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	cout << gcd(a, b);
	return 0;
}