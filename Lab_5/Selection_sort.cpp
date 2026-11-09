
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

    void selection()
    {
        int min;

        for(int i=0;i<n-1;i++)
        {
            min=i;

            for(int j=i+1;j<n;j++)
            {
                if(a[j]<a[min])
                {
                    min=j;
                }
            }

            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
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
    s.selection();
    s.display();

    return 0;
}
