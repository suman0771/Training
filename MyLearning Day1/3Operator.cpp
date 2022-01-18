#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter num1 & num2 : ";
    cin >> num1 >> num2;
    cout << "Num1 + num2 = " << num1 + num2 << endl;
    cout << "Num1 - num2 = " << num1 - num2 << endl;
    cout << "Num1 * num2 = " << num1 * num2 << endl;
    cout << "Num1 / num2 = " << num1 / num2 << endl; // here result could not be accurate due to int data type of num1 and num2
    // so
    cout << "Num1 / num2 = " << (float)num1 / num2 << endl;
}