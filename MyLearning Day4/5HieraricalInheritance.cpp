#include <iostream>
using namespace std;

class Shape
{
protected:
    int len, bred, rad;

public:
    void getlen()
    {
        cout << "\n Enter len = ";
        cin >> len;
    }
    void getbred()
    {
        cout << "\n Enter bred = ";
        cin >> bred;
    }
    void getrad()
    {
        cout << "\n Enter rad = ";
        cin >> rad;
    }
};

class Square : public Shape
{
    float area, peri;

public:
    void calculate()
    {
        area = len * len;
        peri = 4 * len;
    }
    void display()
    {
        cout << "\n LENGTH = " << len;
        cout << "\n AREA   = " << area;
        cout << "\n PERI   = " << peri;
    }
};

class Circle : protected Shape
{
    float area, cir;

public:
    void calculate()
    {
        getrad();
        area = 3.14 * rad * rad;
        cir = 2 * 3.142 * rad;
    }
    void display()
    {
        cout << "\n RADIUS = " << rad;
        cout << "\n AREA   = " << area;
        cout << "\n CIR    = " << cir;
    }
};
class Rectangle : public Shape
{
    float area, peri;

public:
    void calculate()
    {
        area = len * bred;
        peri = 2 * (len + bred);
    }
    void display()
    {
        cout << "\n LENGTH = " << len;
        cout << "\n BREADTH = " << bred;
        cout << "\n AREA   = " << area;
        cout << "\n PERI   = " << peri;
    }
};
int main()
{
    Circle c;
    c.calculate();
    c.display();

    Square ob;
    ob.getlen();
    ob.calculate();
    ob.display();

    Rectangle re;
    re.getlen();
    re.getbred();
    re.calculate();
    re.display();

    return 0;
}
