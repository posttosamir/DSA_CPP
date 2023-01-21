#include <iostream>
using namespace std;

int main()
{
    // int a;
    // int b;

    // for (a = 0; a < 5; a++)
    // {
    //     for (b = 0; b < 5; b++)
    //     {
    //         if (b == 0 || b == 4 || a==0 || a==4)
    //         {
    //             cout << "x ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    int a;
    int b;

    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= 5; b++)
        {
            if (a==1 || a==5 || b ==1 || b ==5)
            {
                cout << "X";
            }
            else
            {
                cout << "_";
            }
        }
        cout << endl;
    }
}