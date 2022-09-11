#include <bits/stdc++.h>

using namespace std;

int main()
{

    string name;
    getline(cin, name); // to take input with spaces

    if (name.length() > 12)
    {
        cout << "Name is too large" << endl;
    }
    else if (

        // name.length() == 0

        name.empty()
        // name.clear(); to clear the string

    )
    {
        cout << "Name is empty" << endl;
    }
    else
    {
        cout << "Welcome"
             << " " << name << endl;
    }

    // cout << name.append(" new string"); appends string to end of string

    // cout << name.at(0) << endl; string at a particular index

    // name.insert(0, "#"); Adds a new character or string in the index
    // cout << name << endl;



    // string namet ="Hello world!"; 
    
    // cout << namet.find(' '); use to find the index of the specified character or string
    
    // namet.erase(0,3); 
    // cout << namet << endl; erases the string from the starting index to the ending index




    return 0;
}