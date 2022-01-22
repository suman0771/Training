#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int ch, a, b, sum;
    do
    {
        cout << "Enter value of a & b: ";
        cin >> a >> b;
        cout << "Sum = " << add(a, b);
        cout << "Enter 1 to continue..... ";
        cin >> ch;
    } while (ch == 1);
    return 0;
}
