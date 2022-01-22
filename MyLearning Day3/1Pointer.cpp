#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p, **q, ***r;
    p = &x;
    q = &p;
    r = &q;

    cout << " x = " << x << "  &x = " << &x << endl;
    cout << " p = " << p << "  &p = " << &p << " *p = " << *p << endl;

    cout << " q = " << q << "  &q = " << &q << " *q = " << *q << " **q = " << **q << endl;

    cout << " r = " << r << "  &r = " << &r << " *r = " << *r << " **r = " << **r << " ***r =" << ***r << endl;
}