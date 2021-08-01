#include <iostream>

using namespace std;

int countM(int arr[1000][2], int n, int k, int* count)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i][1] == k)
		{
			(*(count))++;
			countM(arr, n, arr[i][0], count);
		}
	}
	return*count;
}

int main()
{
	int n = 0;
	cin >> n;
	int arr[1000][2];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i][0];
		cin >> arr[i][1];
	}
	int k = 0;
	cin >> k;
	int count = 1;
	cout << countM(arr, n, k, &count);
	return 0;
}