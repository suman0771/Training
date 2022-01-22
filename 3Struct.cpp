#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

struct Student
{
    int reg;
    string name;
    float marks;
    char section;
};
typedef struct Student stud;
int main()
{
    stud ob;
    cout << "\n Enter Registration no. = ";
    cin >> ob.reg;
    cout << "\nEnter your Name = ";
    cin >> ob.name;
    cout << "\nEnter Marks = ";
    cin >> ob.marks;
    cout << "\nEnter Section = ";
    cin >> ob.section;

    cout << "REGISTRATION = " << ob.reg << endl;
    cout << "NAME    = " << ob.name << endl;
    cout << "MARKS  = " << ob.marks << endl;
    cout << "SECTION = " << ob.section << endl;
}