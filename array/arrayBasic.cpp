#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {1, 2, 4, 5, 6};
    int arr[] = {8, 3, 2, 1, 5, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
int num= 1;
    for (int i = 0; i < n - 1; i++)
    {
        if(arr[i]==num) 
        {
            num++;
        }
        else
        {
            cout<<"missing Numaner is :-"<<num;
        }
    }

    return 0;
}