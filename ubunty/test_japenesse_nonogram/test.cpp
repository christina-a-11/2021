#include <iostream>

using namespace std;
int number_of_ways(int ii, int string[41][11], int n)
{
    int ans = 0;
    int str[41]{-1};
    int k = 0;
    for(int l = 0; l < n; l++)
    {
        int i;
        for(i = 1; i <= string[ii][0]; i++)
        {
            for(int j = 0; j < string[ii][i]; j++)
            {
                if(k > n)
                {
                    break;
                }
                str[k] = 1;
                if(j == string[ii][i] - 1 && i != string[ii][0])
                {
                    str[k + 1] = 0;
                    k++;
                }
                k++;
            }
            k = 0;
        }
    }
    return ans;
}
int main()
{
    int string[41][11]{0};
    string[0][0] = 2;
    string[0][1] = 3;
    string[0][2] = 2;
    cout << number_of_ways(0, string, 8);
    return EXIT_SUCCESS;
}