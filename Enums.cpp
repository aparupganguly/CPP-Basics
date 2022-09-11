#include <bits/stdc++.h>
using namespace std;

enum Day
{
    Sunday = 0,
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6
};

// To be able to use strings in switch case we need enum

int main()
{

    // Welcome, Aparup!

    Day today = Monday;

    switch (today)
    {

    case Sunday:
        cout << "Today is Sunday" << endl;
        break;
    case Monday:
        cout << "Today is Monday" << endl;
        break;
    case Tuesday:
        cout << "Today is Tuesday" << endl;
        break;
    case Wednesday:
        cout << "Today is Wednesday" << endl;
        break;
    case Thursday:
        cout << "Today is Thursday" << endl;
        break;
    case Friday:
        cout << "Today is Friday" << endl;
        break;
    case Saturday:
        cout << "Today is Saturday" << endl;
        break;
    }

    return 0;
};