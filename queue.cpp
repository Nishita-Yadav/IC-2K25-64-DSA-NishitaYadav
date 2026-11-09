#include<iostream>
#define MAX 6
using namespace std;

class Queue
{
    int a[MAX], front, rear, x;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void insert();
    void remove();
    void display();
};

void Queue::insert()
{
    if(rear == MAX-1)
    {
        cout << "Queue overflow" << endl;
    }
    else
    {
        cout << "Enter element to insert: ";
        cin >> x;

        if(front == -1)
            front = 0;

        rear++;
        a[rear] = x;
    }
}

void Queue::remove()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue underflow" << endl;
    }
    else
    {
        x = a[front];
        cout << "Element deleted: " << x << endl;
        front++;

        if(front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void Queue::display()
{
    if(front == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Elements of queue are: ";

        for(int i = front; i <= rear; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    Queue q;

    q.insert();
    q.insert();
    q.insert();

    q.display();

    q.remove();

    q.display();

    return 0;
}