#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    float fees;
    void getdata();
    void display();
};
void Student::getdata()
{
    cout << "Enter roll, name & fees ";
    cin >> roll >> name >> fees;
}
void Student::display()
{
    cout << "\n__________________________\n";
    cout << "ROLL   = " << roll << endl;
    cout << "NAME   = " << name << endl;
    cout << "FEES   = " << fees << endl;
}

int main()
{
    int n, key, flag = 1;
    cout << "\n enter n val = ";
    cin >> n;

    Student ob[n];
    for (int i = 0; i < n; i++)
    {
        ob[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nRECORD NO : " << i + 1 << endl;
        ob[i].display();
    }
    cout << "\n enter key = ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (ob[i].roll == key)
        {
            cout << "Record found...\n";
            ob[i].display();
            flag = 0;
        }
    }
    if (flag == 1)
        cout << "\n Record not found";
    return 0;
}

/* scope resolution operator can be used to define a function outside a class. */