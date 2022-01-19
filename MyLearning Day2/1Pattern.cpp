#include <iostream>
using namespace std;
int main()
{
    int i, n, j;
    cout << "Enter value of n: ";
    cin >> n;

    /* for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    } */
    /////////////////////////////////////////////////////////////////////////

    //n=5
    //1
    //1       2
    //1       2       3
    //1       2       3       4
    //1       2       3       4       5

    /* for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << "\t";
        }

        cout << endl;
    } */
    //////////////////////////////////////////////////////////////////////////

    // n=5

    //5       4       3       2       1
    //5       4       3       2
    //5       4       3
    //5       4
    //5

    /* for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            cout << j << "\t";
        }
        cout << endl;
    } */

    //////////////////////////////////////////////////////////////////

    //5       4       3       2       1
    //4       3       2       1
    //3       2       1
    //2       1
    //1

    /* for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            cout << j << "\t";
        }
        cout << endl;
    } */

    //////////////////////////////////////////////////////////////////////

    //for odd value of n
    //*
    //* *
    //*  *
    //*   *
    //*  *
    //* *
    //*

    //rows=n
    // cloumn j=1  full of starts
    //then i==j then * when i<=((n/2)+1) if n=7 then i<=4

    //Method 1:
    /* for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1)
                cout << "* ";
            else if (i == j && i <= ((n / 2) + 1))
                cout << "* ";
            else if (i + j == n + 1 && i >= ((n / 2) + 1))
                cout << "* ";
            else
                cout << " ";
        }
        cout << endl;
    } */

    //Method 2:

    /* for (int i = 1; i <= n; i++)
    {
        //		cout<<"*";
        for (int j = 1; j <= (n / 2) + 1; j++)
        {
            if (j == 1 || i == j || (i + j) == (n + 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    } */

    //Method 3:

    /* int m = (n + 1) / 2;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (j == 1 || i == j || i + j == n + 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    } */

    /////////////////////////////////////////////////////////////////////

    // n=4
    //11
    //1221
    //123321
    //12344321

    /* for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    } */

    /////////////////////////////////////////////////////////////////

    // n=4
    //1
    //121
    //12321
    //1234321

    /*  for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    } */

    //Method 2:

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - 1; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {

            cout << j;
        }
        for (j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}