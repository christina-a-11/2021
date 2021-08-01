#include <iostream>
#include <vector>

int phi(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int a = 0;
    int b = 1;
    for (int i = 1; i < n; i++)
    {
        int  p = a + b;
        a = b;
        b = p;
    }
    return b;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << phi(n);
    return 0;
}