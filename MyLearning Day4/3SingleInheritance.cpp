#include <iostream>
using namespace std;

class Details
{
    string name;
    long int contact;

public:
    void getdetail()
    {
        cout << "\nEnter name & contact : ";
        cin >> name >> contact;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Contact = " << contact << endl;
    }
};
class official : public Details
{
    string name;
    long int contact;
    char sec;

public:
    void getofficialdetail()
    {
        cout << "\nEnter the name,contact & sec  : ";
        cin >> name >> contact >> sec;
    }
    void display()
    {
        Details::display();
        cout << "\n________________________\n";
        cout << "\nSTUDENT NAME   =" << name;
        cout << "\nSTUDENT CONTACT =" << contact;
        cout << "\nSTUDENT SEC    =" << sec;
    }
};

int main()
{
    official ob;
    ob.getofficialdetail();
    ob.getdetail();
    ob.display();
    return 0;
}