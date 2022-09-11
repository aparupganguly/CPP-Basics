#include <bits/stdc++.h>
using namespace std;
int main()
{

    string name;
   
// basically logical statement of loops
    while (name.empty())
    {
        cout << "Enter your name: ";
         getline(cin, name);
    }

    cout << "Hello" << name << endl;

    return 0;
};