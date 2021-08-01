#include <iostream>

using namespace std;

bool isF(int n, int k, int row[6])
{
	for (int i = 0; i < n; i++)
	{
		if (row[i] != k)
		{
			return false;
		}
	}
	return true;
}

void f(int n, int k, int row[6])
{
	for (int i = 0; i < n; i++)
	{
		cout << row[i] << " ";
    }
	cout << endl;

	if (isF(n, k, row))
	{
		return;
	}
	
	for (int i = n - 1; i >= 0; i--)
	{
		if (row[i] < k)
		{
			row[i]++;
			break;
		}
		else
		{
			row[i] = 1;
			continue;
		}
	}
	f(n, k, row);
}

int main()
{
	int n = 0;
	int k = 0;
	cin >> n >> k;
	int row[] = { 1,1,1,1,1,1 };
	f(n, k, row);
	return 0;
}