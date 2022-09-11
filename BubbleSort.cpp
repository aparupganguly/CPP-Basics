#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Welcome, Aparup!
    int temp;
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < (sizeof(arr) / sizeof(int))-1; i++)
    {

        if (arr[i] < arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
        }
        else {
            cout << arr[i] << endl;
        }
    }

    return 0;
};