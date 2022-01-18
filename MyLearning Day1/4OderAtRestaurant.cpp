#include <iostream>
using namespace std;
/*      1 Poori        45/-
        2 Dosa         35/-
        3 Idli         30/-
        4 Tea/coffee   10/-
        5 Exit
 */

int main()
{
    int total = 0, quant, ch;

    do
    {
        cout << "\n=========================================\n\n";
        cout << "1 Poori        45/-" << endl;
        cout << "2 Dosa         35/-" << endl;
        cout << "3 Idli         30/-" << endl;
        cout << "4 Tea/coffee   10/-" << endl;
        cout << "5 Exit" << endl;
        cout << "\n==========================================\n";
        cout << "Enter your choice: ";
        cin >> ch;
        if (ch >= 1 && ch <= 4)
        {
            cout << "Enter Quantity: ";
            cin >> quant;
        }

        switch (ch)
        {
        case 1:
            total += 45 * quant;
            cout << 45 * quant << endl;
            break;
        case 2:
            total += 35 * quant;
            cout << 35 * quant << endl;
            break;
        case 3:
            total += 30 * quant;
            cout << 30 * quant << endl;
            break;
        case 4:
            total += 10 * quant;
            cout << 10 * quant << endl;
            break;
        case 5:
            cout << "Exit " << endl;
            break;
        default:
            cout << "Invalid" << endl;
        }
    } while (ch != 5);
    cout << "Total bill: " << total << endl;
    return 0;
}
