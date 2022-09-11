#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Welcome, Aparup!

    int *pNum = NULL;

    pNum = new int;
    // Memory allocation in heap rather than stack

    // we use it when we need flexible allocation cause we don't know how much memory user needs.

    *pNum = 3;

    cout << pNum << endl;
    cout << *pNum << endl;

    delete pNum;

    //  we should delete the pointer which is not in use anymore that way we can avoid memory leaks.
    return 0;
};