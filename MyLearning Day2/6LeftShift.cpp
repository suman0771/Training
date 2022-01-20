#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "\n Enter the n = ";
    cin >> n;

    int arr[n], i, temp;
    cout << "\n Enter array elements \n";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n BEFORE left shift \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << "\t";
    // left shift
    temp = arr[0];
    for (i = 0; i < n; i++)
        arr[i] = arr[i + 1];

    arr[n - 1] = temp;

    cout << "\n After left Shift \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << "\t";

    return 0;
}