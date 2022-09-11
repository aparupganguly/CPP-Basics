#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    // Welcome, Aparup!


    int arr[] = {0,3,1,4,487,54,63,7};
    int userNumber;
    cin >> userNumber;
    int size = sizeof(arr)/ sizeof(int);
    cout << search(arr, size, userNumber) << endl;

    return 0;
};