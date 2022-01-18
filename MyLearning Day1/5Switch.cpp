#include <iostream>
using namespace std;

int main()
{
    int ch;
    do
    {
        cout << "Enter ch: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "case 1 " << endl;
            break;
        case 2:
            cout << "case 2 " << endl;
            break;
        case 1 + 2:
            cout << "case 3 " << endl;
            break;
        default: // execute when ch will be any value but not 5 and in given cases
            cout << "Default" << endl;
        case 4:
            cout << "case 4 " << endl;
            break;
        case 5:
            cout << "case 5 " << endl;
            break;
        }
    } while (ch != 5);
}
