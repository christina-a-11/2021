#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector <int> A;
    for(int i = 0; i < n; i++)
    {
        int t = 0;
        cin >> t;
        A.push_back(t);
    }
    vector <int> D;
    for(int i = 0; i < n; i++)
    {
        D.push_back(0);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(A[i] <= A[j] && D[i] < D[j] + 1) // проверка
            {
                D[i] = D[j] + 1;
            }
        }
    }
    int ans = 0;
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        if(D[i] > ans)
        {
            ans = D[i]; // поиск max ans
            k = i;
        }
    }
    ans++;
    cout << ans << '\n';
    vector <int> anst;
    anst.push_back(k);

    for(int i = 0; i < ans; i++)
    {
        for(int j = 0; j < k; j++)
        {
            if(D[j] == D[k] - 1  && A[j] >= A[k])
            {
                anst.push_back(j);
                k = j;
            }
        }
    }
    for(int i = anst.size() - 1; i >= 0; i--)
    {
        cout << anst[i] + 1 << " ";
    }
    return EXIT_SUCCESS;
}