
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

    void bubble()
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
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
    s.bubble();
    s.display();

    return 0;
}
