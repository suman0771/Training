#include <iostream>
using namespace std;

void funct(int x)
{
    x = x + 10;
    cout << " \n Func x = " << x << endl;
}

int main()
{
    int a = 20;

    cout << "\nMain before a = " << a;
    funct(a);
    // a value is not updated in memory
    cout << "Main after a = " << a;
    return 0;
}