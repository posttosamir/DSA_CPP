#include <iostream>
using namespace std;

int main()
{

    // --------------------------------------------------selection sort -------------------------------------------------------------------------------

    int array[] = {8, 4, 3, 7, 2};

    int n = sizeof(array) / sizeof(int);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[j]; //4
                array[j]=array[i]; // 4 is changed with 8
                array[i]= temp;
            }
            cout << array[j];
              
        }
        cout << endl;
    }

    for (int l = 0; l < n; l++)
    {
        cout << array[l];
    }

    // --------------------------------------------insertion sort -------------------------------------------------------------------------------
    // int n;
    // cin >> n;
    // int arr[n];

    // for (int q = 0; q < n; q++)
    // {
    //     cin >> arr[q];
    // }

    // for (int i = 1; i < n; i++)
    // {
    //     int j = i - 1;
    //     int current = arr[i];
    //     while (arr[j] > current && j >= 0)
    //     {
    //         arr[j + 1] = arr[j];
    //         j--;
    //     }
    //     arr[j + 1] = current;
    // }
    // for (int l = 0; l < n; l++)
    // {
    //     cout << arr[l];
    // }

    // int n;
    // cin >> n;
    // int s[n];

    // for(int b = 0; b<n; b++)
    // {
    //     cin >> s[b];
    // }

    // // for(int i = 0; i<n; i++)
    // // {
    // //     cout << s[i];
    // // }

    // for(int i=1; i<n; i++)
    // {
    //     int current = s[i];
    //     int j = i-1;
    //     while(s[j]>current && j>=0)
    //     {
    //         s[j+1]=s[j];
    //         j--;
    //     }
    //     s[j+1]= current;
    // }

    // for(int l=0; l<n; l++)
    // {
    //     cout << s[l];
    // }

    // int s[6] = {8, 6, 4, 1, 3, 9};
    // int n = sizeof(s) / sizeof(int);
    // int current;
    // for (int i = 0; i < n; i++)
    // {
    //     current = s[i];
    //     int j = i - 1;
    //     while (s[j] > current && j >= 0)
    //     {
    //         s[j + 1] = s[j];
    //         j--;
    //     }
    //     s[j + 1] = current;
    // }
    // for (int k = 0; k < n; k++)
    // {
    //     cout << s[k];
    // }

    return 0;
}