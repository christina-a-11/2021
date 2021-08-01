#include <iostream>

using namespace std;

bool isB(int row[11], int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (row[i] == 0)
		{
			return false;
		}
	}
	return true;
}

int indexR(int row[11], int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (row[i] != 0)
		{
			return i;
		}
	}
} //считает индекс первой фишки

void f(int n, int row[11], bool first = true)
{
	if (isB(row, n))
	{
		return;
	}
	if (first)
	{
		if (row[1] == 0)// ставим первую фишку
		{
			row[1] = 1;
			cout << 1 << " ";
		} //иначе ставим на фишку после первой, (если первая занята)
		else
		{
			row[1] = 0;
			cout << -1 << " ";
		}

	}
	else // ставим или убираем после первой стоящей
	{
		if (row[indexR(row, n) + 1] == 0)
		{
			cout << indexR(row, n) + 1 << " ";
			row[indexR(row, n) + 1] = 1;
		}
		else
		{
			cout << -(indexR(row, n) + 1) << " ";
			row[indexR(row, n) + 1] = 0;
		}
	}
	f(n, row, !first);
}

int main()
{
	int n = 0;
	cin >> n;
	int row[11] = { 0 };
	f(n, row);
	return 0;
}