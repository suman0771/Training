#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int arr[n], i, j, temp = 0;
    cout << "Enter Array Value: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before sorting: \t";
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "\nBinary Sorted Array: \t";
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";

    return 0;
}