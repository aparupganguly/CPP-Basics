#include <bits/stdc++.h>
using namespace std;

struct Student
{

    string name;
    double gpa;
    bool enrolled;
};

int main()
{

    // Welcome, Aparup!

    Student student1;
    Student student2;

    student1.name = "Aparup";
    student1.gpa = 9.9;
    student1.enrolled = true;

    student2.name = "Not Aparup";
    student2.gpa = 0.9;
    student2.enrolled = false;

    cout << "Student's Name is :  " << student1.name << endl;
    cout << "Student's GPA is :  " << student1.gpa << endl;
    cout << "Student's enrollment status is :  " << student1.enrolled << endl;
    cout << "Student's Name is :  " << student2.name << endl;
    cout << "Student's GPA is :  " << student2.gpa << endl;
    cout << "Student's enrollment status is :  " << student2.enrolled << endl;

    return 0;
};