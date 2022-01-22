#include <iostream>
#define max 5
using namespace std;

class Stack
{
    int a[max], top;

public:
    Stack()
    {
        top = -1;
    }
    void push();
    void pop();
    void display();
};
void Stack::push()
{
    if (top == max - 1)
        cout << "\nStack overflow \n";
    else
    {
        int ele;
        cout << "\n enter the element = ";
        cin >> ele;
        a[++top] = ele;
    }
}
void Stack::pop()
{
    if (top == -1)
        cout << "\n Stack underflow\n";
    else
    {
        cout << "\n deleting ... " << a[top--] << endl;
    }
}
void Stack::display()
{
    if (top == -1)
        cout << "\n Stack empty\n";
    else
    {
        cout << "\n stack elements are \n";
        for (int i = top; i >= 0; i--)
            cout << a[i] << endl;
    }
}
int main()
{
    int ch;
    Stack ob;
    do
    {
        cout << " 1 PUSH 2 POP 3 DISPLAY 4 EXIT \n";
        cout << "Enter choice = ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            ob.push();
            break;
        case 2:
            ob.pop();
            break;
        case 3:
            ob.display();
            break;
        case 4:
            break;
        default:
            cout << "Go for Holidays \n";
            break;
        }
    } while (ch != 4);
    return 0;
}
