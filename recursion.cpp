#include <iostream>
using namespace std;
// int n;
int fun( int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 1 + fun(n - 1);
    }
}

int main()
{
    cout<<fun(58);
}