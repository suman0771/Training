#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A Constructor......" << endl;
    }
    A(int a)
    {
        cout << " A = " << a;
        cout << "A Constructor......" << endl;
    }
    ~A()
    {
        cout << "A Distructor.....";
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B Constructor......" << endl;
    }
    B(int a) : A(a)
    {
        cout << "B Constructor......" << endl;
    }

    ~B()
    {
        cout << "B Distructor......." << endl;
    }
};

int main()
{
    B ob(7);
    return 0;
}
