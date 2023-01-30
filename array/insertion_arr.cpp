#include <iostream>
using namespace std;

int main()
{

    // int arr[] = {5, 9, 16, 5, 4, 3, 12};
    int arr[]={1,5,3,4,3,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 1; i < n; i++)
    // {
    //     int key = arr[i];
    //     int j = i - 1;
    //     while (j > 0 && arr[j] > key)
    //     {
    //         arr[j + 1] = arr[j];
    //         /* code */
    //         j--; // j=-1
    //     }
    //     arr[j + 1] = key;
    // }
    // for(int i = 0; i<n; i++)
    // {
    //     cout<<arr[i]<<"-> ";
    // }

    for (int i = 0; i < n; i++)
    {
        // int key = arr[i]; // 5
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i];
            }
            
        }
        
    }
}