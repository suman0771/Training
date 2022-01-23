#include <iostream>
using namespace std;

class Addition
{
public:
    int sum(int x, int y)
    {
        cout << "\n Int Int \n";
        return x + y;
    }
    int sum(int x, int y, int z)
    {
        return x + y + z;
    }
    int sum(int x, float y)
    {
        cout << "\n Int Float \n";
        return x + y;
    }
    int sum(float x, float y)
    {
        cout << "\n Float Float \n";
        return x + y;
    }
};

typedef class Addition add;
int main()
{
    add ob;
    cout << ob.sum(5, 6) << endl;
    cout << ob.sum(3, 4, 6) << endl;
    cout << ob.sum(3, 3.5f) << endl;
    cout << ob.sum(3.5f, 3.5f) << endl;
    // mention type of argument to avoid function overloading.

    return 0;
}