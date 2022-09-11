#include <bits/stdc++.h>
using namespace std;

double getTotal(double something[], int size)
{

    double total = 0;
    for (int i = 0; i < size; i++)
    {

        total += something[i];
    }
    return total;
}

int main()
{

    // Welcome, Aparup!

    double array[] = {0.0, 0.0, 0.0, 2.01};
    int size = sizeof(array) / sizeof(double);
    cout << getTotal(array, size);

    return 0;
};