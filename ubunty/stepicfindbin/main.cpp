#include <iostream>

using namespace std;

int findbin(int searched, int * arr, int n)
{
    if(n <= 0)
    {
        return -1;
    }
    if(n == 1 && *(arr) != searched)
    {
        return -1;
    }
    int index = n / 2;
    if(*(arr + index) == searched)
    {
        return index;
    }
    else if(*(arr + index) > searched)
    {
        if(n % 2 == 1)
        {
            index++;
        }
        return findbin(searched, arr, n - index);
    }
    else if(*(arr + index) < searched)
    {
        int tmp = findbin(searched, arr + index, n - index);
        if(tmp != -1)
        {
            return index + tmp;
        }
        else
        {
            return -1;
        }
    }
    return -1;
}

int main()
{
    int n = 0;
    cin >> n;
    int * arrn = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arrn[i];
    }
    int k = 0;
    cin >> k;
    int * arrin = new int[k];
     for(int i = 0; i < k; i++)
    {
        cin >> arrin[i];
    }
    for(int i = 0; i < k; i++)
    {
        int tmp = findbin(arrin[i], arrn, n);
        if(tmp == -1)
        {
            cout << tmp;
        } 
        else
        {
            cout << tmp + 1;
        }
        if(i != k - 1)
        {
            cout << " ";
        }
    }
    delete arrn;
    delete arrin;
    return EXIT_SUCCESS;
}