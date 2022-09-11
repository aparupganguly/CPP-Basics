// #include <bits/stdc++.h>
// using namespace std;

// namespace first
// {

//     int x = 1;

// }

// int main()

// {
//     int x = 0;
//     cout << "Default value of X :  " << x << endl;
//     cout << "Value of x from different namespace : " << first::x << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
namespace notNEw
{
    int x = 50;
}
namespace soNEw
{
    int x = 10;
}
int main()
{   
    using namespace soNEw;
    cout << "Using Namespace keyword : " << x << endl;

    return 0;
}