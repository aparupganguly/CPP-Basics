// // use switchCase instead of if statement if there is multiple if statements.

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int month;
//     cin >> month;
//     switch(month){
//         case 1:
//         cout << "January" << endl;
//         break;
//         case 2:
//         cout << "February" << endl;
//         break;
//         default:
//         cout << "Unknown" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    char Grade;
    cin >> Grade;
    switch (Grade){
        case 'A':
        cout << "Good" << endl;
        break;
        case 'B':
        cout << "Not Bad" << endl;
        break;
        case 'C':
        cout << "Could be better" << endl;
        break;
        default:
        cout << "Bruhh!!!" << endl;

    }

    return 0;
}