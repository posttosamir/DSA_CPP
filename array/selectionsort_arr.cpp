#include <iostream>
using namespace std;

// selection sort------------------------------------------
// replacing the lowest value with front;

int main()
{
    int arr[] = {2, 3, 5, 4, 3};
                    // te

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "n:-"<<n<<endl;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<"arr-"<< arr[i]<<endl;
    }
}