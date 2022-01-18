#include <iostream>
using namespace std;

int main()
{
    /*Marks to Grades */
    int mark1, mark2, mark3;
    cout << "Enter mark1, mark2 & marks3 : ";
    cin >> mark1 >> mark2 >> mark3;
    float avg = float(mark1 + mark2 + mark3) / 3;
    cout << "Average marks : " << avg << endl;
    if (avg <= 100 && avg >= 85)
        cout << "A Grade";
    else if (avg < 85 && avg >= 65)
        cout << "B Grade";
    else if (avg < 65 && avg >= 40)
        cout << "C Grade";
    else if (avg < 40 && avg > 0)
        cout << "F Grade";
    else
        cout << "Invalid";

    return 0;
}
