#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Welcome, Aparup!

    double GPA = 6.8;
    string Name = "Aparup";
    int age = 19;
    float marks = 84.7;
    char Grade = 'A';
    cout << sizeof(GPA) << " bytes" << endl;
    cout << sizeof(Name) << " bytes" << endl;
    cout << sizeof(age) << " bytes" << endl;
    cout << sizeof(marks) << " bytes" << endl;
    cout << sizeof(Grade) << " bytes" << endl;
    cout << endl;
    cout << endl;
    cout << "||||||||||||||||||||||||||||" << endl;
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7};
    cout << sizeof(array) << " bytes" << endl;
    cout << sizeof(array)/ sizeof(array[0]) << " items in array" << endl;
    cout << sizeof(array)/ sizeof(int) << " items in array" << endl;
    cout << "||||||||||||||||||||||||||||" << endl;

    return 0;
};