#include <iostream>
using namespace std;
#include <algorithm>

#include <climits>

int main()
{
    int n = 5;
    int arr[n] = {5, 7, 3, 1, 6};
    int k = 2;

    // sort(arr, arr + n); using library----------------------------------


    // sorting the array------------------------

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout<<"arr"<<arr[k-1];  
    cout<<"arr"<<arr[n-k-1];
}