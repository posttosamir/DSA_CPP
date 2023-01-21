#include <iostream>
using namespace std;

int main()
{

    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    // for(int i = 0; i <=2; i++)
    // {
    //     for(int j=0; j<=2; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }
    //==================array in input===============================
    // int arr[3][3];
    // // int i,j;
    // // cin >>arr[i][j];

    // for (int i = 0; i <= 2; i++)
    // {
    //     for (int j = 0; j <= 2; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // for (int i = 0; i <= 2; i++)
    // {
    //     for (int j = 0; j <= 2; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }
    //====================================  Addition of 2d Arrays ===========================================================

    // int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int b[3][3] = {{2, 4, 1}, {4, 5, 6}, {1, 2, 3}};
    // int c[3][3];

    // for (int i = 0; i <= 2; i++)
    // {
    //     for (int j = 0; j <= 2; j++)
    //     {

    //         // cout << c[a[i]+b[i]][[a[j]+b[j]]];
    //         c[i][j]= a[i][j] + b[i][j];

    //         cout << c[i][j];

    //     }
    //     cout << endl;
    // }
    //====================================  Addition of 2d Arrays ===========================================================

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{2, 1, 4}, {1, 4, 5}, {6, 2, 3}};
    int arr3[3][3];

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            int temp = 0;
            arr3[i][j] = 0;
            for (int k = 0; k <= 2; k++)
            {
                temp = temp + arr[i][k] * arr2[k][j];
                arr3[i][j] = temp;
            }
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << arr3[i][j];
            cout << " ";
        }
        cout << endl;
        // cout << \n;
    }

    // for(int i = 0; i<=2; i++)
    // {
    //     for(int j = 0; j<=2; j++)
    //     {
    //         cout << arr2[i][j];
    //     }
    //     cout << endl;
    // }

    return 0;
}
