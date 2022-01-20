#include <iostream>
using namespace std;
int main()
{
    int n, arr[n], i, key = 0, j, flag = 1;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter array Elements: \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search : ";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at " << i + 1 << " location. ";
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "Element not found";
    }
}