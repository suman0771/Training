#include <iostream>
using namespace std;
int main()
{
    /*
        n=4
    ---------------------
        2 3 4 5

     n=4  i<=n    cout<<++i
    ----------------------------
     i=1  1<=4 T       ++1=2
     2    2<=4 T       ++2=3
     3    3<=4 T       ++3=4
     4    4<=4 T       ++4=5
     5    5<=4 F----------------------------
    */
    int n;
    cout << "Enter Value of n : ";
    cin >> n;

    cout << "Series 1: " << endl;
    int i = 1;
    while (i <= n)
    {
        cout << ++i << " ";
    }
    cout << endl;

    /*
        n=6
    ---------------------
        1 4 7 10 13 16
    */
    cout << "Series 2: " << endl;
    int j = 1, k = 1;
    while (j <= n)
    {
        cout << k << " ";
        k += 3;
        j++;
    }
    cout << endl;

    /*
        n=6
    ---------------------
        1 2 6 24 120

     */

    cout << "Series 3: " << endl;
    int fact = 1, l = 1;
    while (l <= n)
    {
        fact *= l;
        cout << fact << "\t";
        l++;
    }
    cout << endl;

    /*
    n=6
------------------------
    6 10 12 12 10 6

     */
    cout << "Series 4: Method 1: " << endl;
    int x = 1, y = n;
    for (x, y; x <= n; x++, y--)
    {
        cout << x * y << "\t";
    }
    cout << endl;
    cout << "Series 4: Method 2: " << endl;
    for (i = 1; i <= n; i++)
    {
        cout << i * (n - (i - 1)) << "\t";
    }
    cout << endl;

    return 0;
}