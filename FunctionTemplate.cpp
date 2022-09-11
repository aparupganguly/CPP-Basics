// #include <bits/stdc++.h>
// using namespace std;

// template <typename T>

// // This way we will be able to use any data type in the function

// T maxy(T x, T y)
// {
//     return (x > y) ? x : y;
// }

// int main()
// {
//     cout << maxy(2, 3) << endl;
//     cout << maxy('A', 'B') << endl;
//     cout << maxy(2.4, 3.8) << endl;

//     return 0;
// };

#include <bits/stdc++.h>
using namespace std;

template <typename T, typename U>

// to use mixed datatypes

auto maximum(T x, U y)
{
    return x > y ? x : y;
}

int main()
{

    // Welcome, Aparup!

    cout << maximum(1, 3.7) << endl;
    return 0;
};