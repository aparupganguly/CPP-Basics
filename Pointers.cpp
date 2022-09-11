#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Welcome, Aparup!

    // pointers are the variables that stores a memory address of another variable

    string name = "Aparup";

    string *pName = &name;

    cout << pName << endl;
    cout << *pName << endl;

    return 0;
};