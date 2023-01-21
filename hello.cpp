// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"hello"<<endl;
//     int a;
//     cout << "Enter value of a : ";
//     cin>>a;
//     cout<<a;
//     return 0;
// }

// int main()
// {
//     cout <<"helooe";
//     int a;
//     cin >> a;
//     cout << a;
// }

// --------------------assignment -day 02-value Itnerchanged ---------------------------------------
// int main()
// {
//     int a =10;
//     int b = 12;

//     cout <<"a:-"<< a;
//     cout << "b:-"<< b;

//     int c =b;
//     int d = a;

//     cout << "value interChanged  "<<endl;
//     cout << "a :"<<c;
//     cout << "b :"<<d;
// }
// -------------------- ---------------------------------------

// ------------------- ---------------------------------------

// float
#include <iostream>
using namespace std;

// int main()
// {
// float f = 2.9;;
// float f2 = 3.2;
// float f3 = f+f2;
// // cout << f3 <<endl;
// cout << sizeof(char) <<endl;
// cout << sizeof(string) <<endl;
// cout << sizeof(float) <<endl;
// cout << sizeof(int) <<endl;
// cout << int('a') <<endl;
// cout << int('b') <<endl;

//     int a = 5;

//     if (a<6)
//     {
//         cout << "this is less than 6"; /* code */
//     }
//     else
//     {
//         cout << "this is not less than 6";
//     }
//     return 0;

// }

int main()
{
    // int choice;

    // cin >>choice;

    // if (choice == 1)
    // {
    //     cout << "Please enjoy your coffee";
    // }
    // else
    // {
    //     cout << "Please enjoy your tea";
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "print 5 times"<<endl;/* code */
    // }
    // int i = 0;
    // int sum  =0;

    // while (i < 10)
    // {

    //     i = i + 1; /* code */
    //     // sum = sum + i;
    // cout << i << endl;
    // }
    // return 0;

    // printing number 5 times------------------------------------------------------------------------

    // for (int  i = 0; i < 5; i++)
    // {
    //   cout<<"hello world!"<<endl;  /* code */
    // }

    // printing number 1 to 10 ------------------------------------------------------------------------

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << i << endl;
    // }
    // addition of 1 to 10 number ------------------------------------------------------------------------

    // for (int i = 0; i <= 10; i++)
    // {
    //     i = i+1;
    //     cout << i << endl;
    // }
    // table of 10 ------------------------------------------------------------------------------------
    // for( int a = 1; a<=10; a++)
    // {
    //     cout << a *10 <<endl;
    // }

    // --sum of 100 num -------------------------------------------------------------------------

    // int sum = 0;
    // for (int a = 0; a <= 100; a++)

    // {
    //     // int d=a+1;
    //     // int sum = d+a;
    //     // int d = a++;
    //     sum = sum + a;

    //     cout << sum << endl;
    // }

    // -------------------------------do while-------------------
    // int i = 1;
    // do
    // {
    //     cout << "hello world!" << endl;
    //     i++;
    // } while (i < 5);

    // ---------------------------------while--------------------

    // int i = 1;

    // while(i<=10)
    // {
    //     cout << "print hello world 10 times" << i << endl;
    //     i++;
    // }
    // ----------------------------------for loop--------------------

    // int i;

    // for(i=1; i<=10; i++)
    // {
    //     cout << "hello world!"<< endl ;
    // }

    // Assignment - to print addition of number upto what user input number
    // int x;
    // cout << "Enter the number :-";
    // cin >> x;
    // int y;
    // int sum = 0;
    // for (y = 0; y <= x; y++)
    // {
    //     sum = sum+y;
    // }
    //     cout << sum << endl;
    // cout << x;
    // -----------------------------------to print 5-4-3-2-1=-----------------
    // int n;
    // cout << " enter the number :- ";
    //     cin >> n;
    //     for (int y = n; y > 0; y--)
    //     {
    //         cout << y << endl;
    //     }

    // -----------------------------printing pattern------------------------
    // xxxxx
    // xxxxx
    // xxxxx
    // xxxxx
    // xxxxx
    // int i;
    // int j;

    // for (i=1; i<=5; i++)
    // {
    //     for(j=1;j<=5;j++)
    //     {
    //         cout << "x";
    //     }
    //     cout << endl;
    // }

    // ---------------------------------pattern printing ----------------------------------------------

    // ****
    // ****
    // ****
    // ****

    // int a;

    // int b;

    // for(a=1; a<=5;a++)
    // {
    //     for(b=1; b<=5; b++)
    //     {
    //         cout <<"x" ;
    //     }
    //     cout <<endl;
    // }

    // ------------hollow square-----------------------------------------------
    // xxxxx
    // x   x
    // x   x
    // x   x
    // xxxxx
    int a;
    int b;
    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= 5; b++)
        {
            if (b == 1 || b == 5 || a == 1 || a == 5)
            {
                cout << "x";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}