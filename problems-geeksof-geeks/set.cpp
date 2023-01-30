#include <iostream>

using namespace std;

#include <set>;

int main()
{

    int a[] = {85, 25, 11, 25, 1, 32, 54, 6};

    set<int> newSet{begin(a), end(a)};

    set<int>::iterator it;

    for(it=newSet.begin(); it!=newSet.end(); it++)
    {
        cout<< *it <<endl;

    }

    return 0;
}