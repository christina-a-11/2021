#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    long long a = 0;
    long long b = 0;
    cin >> a >> b;
    while(a != b)
    {
        if(a == 1 || b == 1)
        {
            break;
        }
        if(a > b)
        {
            a = a / 2;
        }
        else
        {
            b = b / 2;
        }
    }
    if(a <= b)
    {
        cout << a << endl;
    }
    else 
    {
      cout << b << endl;  
    }
    return 0;
}