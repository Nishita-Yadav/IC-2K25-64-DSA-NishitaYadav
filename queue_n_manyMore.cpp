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
    void search();
    void count();
    void minimum();
    void maximum();
    void reverse();
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
            cout << a[i] << " ";
        cout << endl;
    }
}
void Queue::search()
{
    int data, found = 0;
   cout << "Enter element to search: ";
    cin >> data;
    for(int i = front; i <= rear; i++)
    {
        if(a[i] == data)
        {
            cout << "Element found at position: " << i << endl;
            found = 1;
            break;
        }
    }
    if(found == 0)
        cout << "Element not found" << endl;
}
void Queue::count()
{
    if(front == -1)
        cout << "Number of elements: 0" << endl;
    else
        cout << "Number of elements: " << rear-front+1 << endl;
}
void Queue::minimum()
{
    if(front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    int min = a[front];
    for(int i = front+1; i <= rear; i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    cout << "Minimum element: " << min << endl;
}
void Queue::maximum()
{
    if(front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
   int max = a[front];
    for(int i = front+1; i <= rear; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    cout << "Maximum element: " << max << endl;
}
void Queue::reverse()
{
    if(front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Reverse queue: ";
    for(int i = rear; i >= front; i--)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    Queue q;
    q.insert();
    q.insert();
    q.insert();
    q.insert();

    q.display();

    q.search();
    q.count();
    q.minimum();
    q.maximum();
    q.reverse();

    q.remove();

    q.display();

    return 0;
}