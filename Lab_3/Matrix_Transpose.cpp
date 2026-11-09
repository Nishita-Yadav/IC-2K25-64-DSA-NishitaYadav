
#include<iostream>
using namespace std;

class Matrix
{
    int a[10][10], r, c;

public:

    void input()
    {
        cout<<"Enter rows and columns: ";
        cin>>r>>c;

        cout<<"Enter matrix elements:\n";

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
    }

    void transpose()
    {
        cout<<"\nTranspose of Matrix:\n";

        for(int i=0;i<c;i++)
        {
            for(int j=0;j<r;j++)
            {
                cout<<a[j][i]<<"\t";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Matrix m;

    m.input();
    m.transpose();

    return 0;
}
