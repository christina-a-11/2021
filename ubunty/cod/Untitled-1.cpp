#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int distance[102][102];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> distance[i][j];
        }
    }
    int sum = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            int tmp = 0;
            tmp += distance[i][j];
            for(int k = j + 1; k <= n; k++)
            {
                tmp += distance[j][k];
                tmp += distance[k][i];
                if(sum == 0 || sum > tmp)
                {
                    sum = tmp;
                }
                tmp -= distance[k][i];
                tmp -= distance[j][k];
            }
        }
    }
    cout << sum << endl;
    return 0;
}