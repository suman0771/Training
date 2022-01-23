#include <iostream>
using namespace std;

struct Artist
{
    string name;
    float fees;

public:
    Artist();
    Artist(string x);
    Artist(string x, float y);
    void display();
    ~Artist();
};

Artist::Artist()
{
    name = "Sum";
    fees = 0;
}
Artist::Artist(string x)
{
    name = x;
    fees = 0;
}
Artist::Artist(string x, float y)
{
    name = x;
    fees = y;
}
Artist::~Artist() // delete from top of stack LIFO
{
    cout << "\nDestructing...." << name << " & " << fees;
}
void Artist::display()
{
    cout << "\nName = " << name << " &  Fees = " << fees;
}

int main()
{
    Artist ob;
    ob.display();
    Artist ob1("Suman");
    ob1.display();
    Artist ob3("SUMN", 59999.9);
    ob3.display();

    return 0;
}