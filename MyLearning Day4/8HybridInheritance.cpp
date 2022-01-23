#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout << "\n A Constructor..\n";
    }
    ~A()
    {
        cout << "\n Destroy A\n";
    }
};
class B : public A
{
public:
    B()
    {
        cout << "\n B Constructor..\n";
    }
    ~B()
    {
        cout << "\n Destroy B\n";
    }
};
class D
{
public:
    D()
    {
        cout << "\n D Constructor..\n";
    }
    ~D()
    {
        cout << "\n Destroy D\n";
    }
};
class C : public B, public D
{
public:
    C()
    {
        cout << "\n C Constructor..\n";
    }
    ~C()
    {
        cout << "\n Destroy C\n";
    }
};
int main()
{
    C ob;
    return 0;
}
