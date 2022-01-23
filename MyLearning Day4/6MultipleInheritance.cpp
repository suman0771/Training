#include <iostream>

using namespace std;

class PersonalDetails
{
    string name;

public:
    PersonalDetails()
    {
        cout << "\n Enter name = ";
        cin >> name;
    }
    void sample()
    {
        cout << "\n Personal Details ............." << endl;
    }
};

class Marks
{

public:
    int m;
    Marks()
    {
        cout << "\n Enter marks = ";
        cin >> m;
    }
    void sample()
    {
        cout << "\n Marks ............." << endl;
    }
};

class Report : public PersonalDetails, public Marks
{
public:
    Report()
    {
        if (m > 35)
            cout << "U got lucky";
        else
            cout << "Better luck next time";
    }
    void sample()
    {
        PersonalDetails::sample();
        Marks::sample();
    }
};

int main()
{
    Report ob;
    ob.sample();
    return 0;
}
