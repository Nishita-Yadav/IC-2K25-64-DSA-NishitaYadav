
#include<iostream>
using namespace std;

class Matrix
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;

public:

    void input()
    {
        cout<<"Enter rows and columns of first matrix: ";
        cin>>r1>>c1;

        cout<<"Enter rows and columns of second matrix: ";
        cin>>r2>>c2;

        cout<<"Enter first matrix:\n";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
                cin>>a[i][j];
        }

        cout<<"Enter second matrix:\n";
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
                cin>>b[i][j];
        }
    }

    void addition()
    {
        if(r1!=r2 || c1!=c2)
        {
            cout<<"Addition not possible";
            return;
        }

        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
                c[i][j]=a[i][j]+b[i][j];
        }

        display();
    }

    void subtraction()
    {
        if(r1!=r2 || c1!=c2)
        {
            cout<<"Subtraction not possible";
            return;
        }

        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
                c[i][j]=a[i][j]-b[i][j];
        }

        display();
    }

    void multiplication()
    {
        if(c1!=r2)
        {
            cout<<"Multiplication not possible";
            return;
        }

        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                c[i][j]=0;

                for(int k=0;k<c1;k++)
                    c[i][j]+=a[i][k]*b[k][j];
            }
        }

        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
                cout<<c[i][j]<<"\t";

            cout<<endl;
        }
    }

    void display()
    {
        cout<<"Result:\n";

        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
                cout<<c[i][j]<<"\t";

            cout<<endl;
        }
    }
};

int main()
{
    Matrix m;
    int ch;

    m.input();

    do
    {
        cout<<"\n1. Addition";
        cout<<"\n2. Subtraction";
        cout<<"\n3. Multiplication";
        cout<<"\n4. Exit";
        cout<<"\nEnter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                m.addition();
                break;

            case 2:
                m.subtraction();
                break;

            case 3:
                m.multiplication();
                break;

            case 4:
                cout<<"Exiting...";
                break;

            default:
                cout<<"Invalid choice";
        }

    }while(ch!=4);

    return 0;
}
