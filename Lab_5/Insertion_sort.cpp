
#include<iostream>
using namespace std;

class Sort
{
    int a[50], n, temp;

public:

    void input()
    {
        cout<<"Enter number of elements: ";
        cin>>n;

        cout<<"Enter array elements:\n";

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }

    void insertion()
    {
        int key, j;

        for(int i=1;i<n;i++)
        {
            key=a[i];
            j=i-1;

            while(j>=0 && a[j]>key)
            {
                a[j+1]=a[j];
                j--;
            }

            a[j+1]=key;
        }
    }

    void display()
    {
        cout<<"\nSorted Array:\n";

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
};

int main()
{
    Sort s;

    s.input();
    s.insertion();
    s.display();

    return 0;
}
