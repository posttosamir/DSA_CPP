#include <iostream>
using namespace std;

void increment(int *a)
{
    *a++;
}

int main()
{
    // int x = 20;
    // int &y = x;  // reference variable;
    // int *z = &x; // pointer variable;

    // y = 5555;
    // x = 88888888;

    // cout<<"X:-" << x << endl;
    // cout<<"Y:-" << y << endl;
    // cout<<"Z:-"<< z;

    // int x = 20000;

    // int *aptr = &x;
    // int *c = &x;

    // cout<<"x  :-"<<c<<endl;
    // cout<<"&x :-"<<&x<<endl;
    // cout<<"aptr:-"<<aptr<<endl;
    // cout<<"*aptr:-"<<*aptr<<endl;

    // ---------------------------------------------------------------

    // int a[] = {10, 20, 30};

    // cout << a << endl;
    // cout << *a << endl;

    // int *ptr = a;
    // cout << ptr << endl;
    // cout << *ptr;

    // for(int i =0;i<3;i++)
    // {
    //     cout<<*ptr<<endl;
    //     ptr++;          //--------------- illegal
    // }

    // following is not allowed as a is constant pointer whose value we cant modify
    // for(int i =0;i<3;i++)
    // {
    //     cout<<*a<<endl;
    //     a++;          //--------------- illegal
    // }
    // -------------------------------

    // but we can add

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << *(a+i) << endl;// here a+i will go to the next index(as a is a indexing pointer not a memory pointer) location and *(a+i) will print its value;
    // }
    // --------------------------------------------------------------------------------------------
    int a = 20;
    // int *aptr = &a;
    // increment(aptr);or
    increment(&a);
    cout << a << endl;
    int newfn(int a){
        int c = a+2; 
        cout<<c; 
    }
    newfn(5);









    return 0;
}