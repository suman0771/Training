#include <iostream>
using namespace std;
int main()
{
    int n, arr[n];
    cout << "Enter value of n: ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
        sum += arr[i];
    }
    cout << "\nSum of array elements: " << sum;
    return 0;
}