#include <iostream>
using namespace std;

void funct(int *x)
{
    *x = *x + 10;
    cout << " \n Func x = " << *x << endl;
}

int main()
{
    int a = 20;

    cout << "\nMain before a = " << a;
    funct(&a);
    // value is upadated in memory
    cout << "Main after a = " << a;
    return 0;
}