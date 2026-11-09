
#include<iostream>
#define MAX 6
using namespace std;

class mul_stack
{
    int a[MAX], top1, top2, x;

public:
    mul_stack()
    {
        top1 = -1;
        top2 = MAX;
    }

    void push1();
    void push2();
    void pop1();
    void pop2();
    void display();
};

void mul_stack::push1()
{
    if(top1 == top2 - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        cout << "Enter element to push in Stack 1: ";
        cin >> x;

        top1++;
        a[top1] = x;
    }
}

void mul_stack::push2()
{
    if(top2 == top1 + 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        cout << "Enter element to push in Stack 2: ";
        cin >> x;

        top2--;
        a[top2] = x;
    }
}

void mul_stack::pop1()
{
    if(top1 == -1)
    {
        cout << "Stack 1 Underflow" << endl;
    }
    else
    {
        x = a[top1];
        cout << "Element popped from Stack 1: " << x << endl;
        top1--;
    }
}

void mul_stack::pop2()
{
    if(top2 == MAX)
    {
        cout << "Stack 2 Underflow" << endl;
    }
    else
    {
        x = a[top2];
        cout << "Element popped from Stack 2: " << x << endl;
        top2++;
    }
}

void mul_stack::display()
{
    cout << "\nElements of Stack 1 are: ";
    
    if(top1 == -1)
        cout << "Empty";
    else
    {
        for(int i = top1; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
    }

    cout << "\nElements of Stack 2 are: ";

    if(top2 == MAX)
        cout << "Empty";
    else
    {
        for(int i = top2; i < MAX; i++)
        {
            cout << a[i] << " ";
        }
    }

    cout << endl;
}

int main()
{
    mul_stack m;
    int choice;

    do
    {
        cout << "\n\n----- TWO STACK MENU -----";
        cout << "\n1. Push in Stack 1";
        cout << "\n2. Push in Stack 2";
        cout << "\n3. Pop from Stack 1";
        cout << "\n4. Pop from Stack 2";
        cout << "\n5. Display";
        cout << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                m.push1();
                break;

            case 2:
                m.push2();
                break;

            case 3:
                m.pop1();
                break;

            case 4:
                m.pop2();
                break;

            case 5:
                m.display();
                break;

            case 6:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 6);

    return 0;
}

