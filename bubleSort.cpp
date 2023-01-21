#include <iostream>
using namespace std;

int main()
{

    // int arr[6] = {5, 1, 9, 4, 2, 7};
    // int n = sizeof(arr) / sizeof(int);
    // // cout << n;
    // int temp;
    // for (int k = 0; k < n - 1; k++)
    // {

    //     for (int i = 0; i < n - 1 - k; i++)
    //     {
    //         if (arr[i] > arr[i + 1])
    //         {
    //             temp = arr[i];
    //             arr[i] = arr[i + 1];
    //             arr[i + 1] = temp;
    //         }
    //         // cout << arr[i];
    //         // cout << endl;
    //     }
    //     // cout << endl;
    //     // cout << arr[k];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }
    // -------------------------------------------------------------------------------

    int r[5] = {3, 2, 5, 4, 1};
    int n = sizeof(r) / sizeof(int);
    int temp;
    // cout << n;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 -i; j++)
        {
            if (r[j] > r[j + 1])
            {
                temp = r[j];
                r[j] = r[j + 1];
                r[j + 1] = temp;
            }
            // for(int b = 0; b<=n-1; b++)
            // {
            //     cout << r[b];
            // }
            // cout << endl;
        }
    }
    for (int z = 0; z < n; z++)
    {
        cout << r[z];
    }
    return 0;
}