#include <iostream>
using namespace std;

int areaRoom (char maze[12][12], int n, int a, int b)
{
	if (maze[a][b] == '.')
	{
		maze[a][b] = '*';
		return 1 + areaRoom(maze, n, a, b - 1) + areaRoom(maze, n, a + 1, b) + areaRoom(maze, n, a, b + 1) + areaRoom(maze, n, a - 1, b);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n = 0;
	cin >> n;
	char maze[12][12];
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			maze[i][j] = '*';
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> maze[i][j];
		}
	}
	int a = 0;
	int b = 0;
	cin >> a >> b;
	cout << areaRoom(maze, n, a, b);
	return 0;
}