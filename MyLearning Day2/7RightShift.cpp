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

    cout << "\n BEFORE Right shift \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << "\t";
    // Right Shift
    temp = arr[n - 1];
    for (i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;

    cout << "\n After Right Shift \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << "\t";
    return 0;
}
