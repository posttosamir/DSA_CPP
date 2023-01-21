#include <iostream>

using namespace std;

int main()
{

    // cout << "enter the numbers";

    // int a[5];

    // cin >> a[5];
    // // int a[5] = {1,2,2,3,3};

    // for(int i=0; i<=5; i++)
    // {

    // cout << a[i];
    // }

    // int a = 5;

    // cout << &a ;

    int a[3] = {2, 2, 4};
    // cout << "a[3]";

    // cout << a[1];
    // char b;
    int val = 4;
    char f = "y";

    for (int i = 0; i <= 3; i++)
    {
        if (a[i] == val)
        {
            f = "z";
            break;
        }
    }
    if (f == "z")
    {
        cout << "value is present";
    }
    else
    {
        cout << "value is not present";
    }
}