#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p;
    p = arr;
    cout << "\n\n in loop vlaue =    ";
    for (int i = 0; i < 5; i++)
        cout << *(p + i) << "\t\t";
    cout << "\n\n in loop address = ";
    for (int i = 0; i < 5; i++)
        cout << (p + i) << "\t";
    cout << endl;
    cout << endl;
    cout << " p = " << p << endl;
    cout << " *p = " << *p << endl;
    cout << " *(p++) = " << *(p++) << endl;
    cout << " p = " << p << endl;
    cout << " *p = " << *p << endl;
    cout << " p++ = " << p++ << endl;
    cout << " p = " << p << endl;
    cout << " *p = " << *p << endl;
    cout << " ++p = " << ++p << endl;
    cout << " p = " << p << endl;
    cout << " *p = " << *p << endl;
    cout << " p+1 = " << p + 1 << endl; // next address
    cout << " *(p+1) = " << *(p + 1) << endl;

    return 0;
}
