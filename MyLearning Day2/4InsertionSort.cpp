#include <iostream>
using namespace std;
int main()
{
    int n, arr[n], i, key = 0, j;
    cout << "Enter value of n: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout << "\n Array after Insertion sort: \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}