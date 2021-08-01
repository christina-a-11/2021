#include <iostream>

bool rec(int n)
{
    if (n < 0)
    {
        return false;
    }
    else  if (n == 0)
    {
        return true;
    }
    else
    {
        return rec(n - 5) || rec(n - 3);
    }
}

int main()
{
    int n = 0;
    std::cin >> n;
    if (rec(n - 1) || n == 1)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}