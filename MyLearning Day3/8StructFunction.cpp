#include <iostream>
using namespace std;

struct Student
{
    int rollno;
    string name;
    float per;
    char section;
};
typedef struct Student Stud;
/* void getdata(Stud *ob)
{
    cout << "\n enter roll,name,per,section = ";
    cin >> ob->rollno >> ob->name >> ob->per >> ob->section;
} */
void display(Stud ob);
void getdata(Stud ob)
{
    cout << "\n enter roll,name,per,section = ";
    cin >> ob.rollno >> ob.name >> ob.per >> ob.section;
    display(ob);
}

void display(Stud ob)
{
    cout << "Roll no = " << ob.rollno << endl;
    cout << "NAME    = " << ob.name << endl;
    cout << "PER     = " << ob.per << endl;
    cout << "SECTION = " << ob.section << endl;
}
int main()
{
    Stud ob;
    // getdata(&ob);
    getdata(ob);
    // display(ob);
    return 0;
}

/* The Dot (.) operator is used to normally access members of a structure or union.

The Arrow (->) operator exists to access the members of the structure or the unions using pointers. */