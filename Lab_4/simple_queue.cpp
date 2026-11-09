
#include<iostream>
#define MAX 6
using namespace std;

class Queue
{
    int a[MAX], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void insert()
    {
        if(rear == MAX-1)
            cout << "Queue Overflow" << endl;
        else
        {
            int x;
            cout << "Enter element: ";
            cin >> x;

            if(front == -1)
                front = 0;

            rear++;
            a[rear] = x;
        }
    }

    void remove()
    {
        if(front == -1)
            cout << "Queue Underflow" << endl;
        else
        {
            cout << "Deleted element: " << a[front] << endl;
            front++;

            if(front > rear)
            {
                front = -1;
                rear = -1;
            }
        }
    }

    void display()
    {
        if(front == -1)
            cout << "Queue is empty" << endl;
        else
        {
            cout << "Queue elements: ";
            for(int i = front; i <= rear; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
};

int main()
{
    Queue q;
    int ch;

    do
    {
        cout << "\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1: q.insert(); break;
            case 2: q.remove(); break;
            case 3: q.display(); break;
            case 4: cout << "Exit"; break;
            default: cout << "Invalid choice";
        }

    }while(ch != 4);

    return 0;
}
