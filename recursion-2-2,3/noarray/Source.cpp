#include <iostream>
//ƒано натуральное число N и последовательность из N элементов.
// “ребуетс€ вывести эту последовательность в обратном пор€дке.
using namespace std;

void output(int n)
{
	int tmp;
	if (n > 0)
	{
		cin >> tmp;
		output(n - 1);
		cout << tmp << " ";
	}
}

int main()
{
	int n = 0;
	cin >> n;
	output(n);
	return 0;
}