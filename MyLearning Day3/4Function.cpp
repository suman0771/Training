#include <iostream>
using namespace std;

void add()
{
    int a, b, sum;
    cout << "Enter value of a & b: \n";
    cin >> a >> b;
    sum = a + b;
    cout << "Sum = " << sum;
}
int main()
{
    int ch;
    do
    {
        add();
        cout << "\nEnter 1 to continue....";
        cin >> ch;
    } while (ch == 1);

    return 0;
}