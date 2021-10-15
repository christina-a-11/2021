#include <iostream>
#include <string>

using namespace std;

int diff(char a, char b);

int minF(int D[101][101], int i, int j, string A, string B)
{
    if(i == 0)
    {
        return j;
    }
    if(j == 0)
    {
        return i;
    }
    int a = D[i][j - 1] + 1;
    int b = D[i - 1][j] + 1;
    int c = D[i - 1][j - 1] + diff(A[j], B[i]);
    if(a > b)
    {
        swap(a, b);
    }
    if(a > c)
    {
        swap(a, c);
    }
    return a;
}

int diff(char a, char b)
{
    if(a == b)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    string a = "";
    string b = "";
    cin >> a >> b;
    a = '0' + a;
    b = '0' + b;
    int n = a.size() - 1;
    int m = b.size() - 1;
    int D[101][101]{0};
    for(int i = 0; i <= m; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            D[i][j] = minF(D, i, j, a, b);
        }
    }
    cout << D[m][n] << '\n';
    return EXIT_SUCCESS;
}