#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    // cout << "hello";
    // cout << sizeof(int);
    // cout << sizeof(arr);
    int n = sizeof(arr) / sizeof(int);
    // cout << n;
    int val = 55;
    int s = 0;
    int e = n - 1;
    // cout << mid;
    int res = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == val)
        {
            res = mid;
            // cout << "value is present at :- ";
            // cout << mid;
            // cout <<
            break;
        }
        else if (arr[mid] > val)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        };
    };

    if (res == -1)
    {
        cout << " Element not found!!";
    }
    else
    {
        cout << "found at :-" << res;
    }
    return 0;
};