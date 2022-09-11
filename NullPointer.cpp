#include <bits/stdc++.h>
using namespace std;
int main()
{

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        cout << "Null Pointer" << endl;
    }
    else
    {
        cout << "Pointer" << endl;
    }

    return 0;
};