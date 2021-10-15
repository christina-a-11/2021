#include <iostream>

using namespace std;

int main()
{
    int bridge[101][101]{0};
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> bridge[i][j];
        }
    }
    cout << "banana" << endl;

    int tmp;
    cin >> tmp;

    int color[101];
    for(int i = 0; i < n; i++)
    {
        cin >> color[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(i != j && bridge[i][j] == 1 && color[i] == color[j])
            {
                sum++;
            }
        }
    }
    cout << sum << endl;
    return 0;
}