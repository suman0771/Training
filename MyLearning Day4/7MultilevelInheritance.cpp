#include <iostream>

using namespace std;

class A
{
public:
    A(int a)
    {
        cout << " A's Constructor....A =" << a << endl;
    }
};

class B : public A
{
public:
    B(int a, int b) : A(a)
    {
        cout << " B's Constructor .....B =" << b << endl;
    }
};

class C : public B
{
public:
    C(int a, int b, int c) : B(a, b)
    {
        cout << " C's Constructor .... C =" << c << endl;
    }
};

int main()
{
    C ob(2, 3, 4);
    return 0;
}
