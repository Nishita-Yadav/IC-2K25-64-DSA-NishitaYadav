
#include<iostream>
using namespace std;

class Matrix
{
    int a[2][2][2][2][2];

public:

    void input()
    {
        cout<<"Enter 32 elements:\n";

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                for(int k=0;k<2;k++)
                {
                    for(int l=0;l<2;l++)
                    {
                        for(int m=0;m<2;m++)
                        {
                            cin>>a[i][j][k][l][m];
                        }
                    }
                }
            }
        }
    }

    void display()
    {
        cout<<"\n5D Matrix Elements:\n";

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                for(int k=0;k<2;k++)
                {
                    for(int l=0;l<2;l++)
                    {
                        for(int m=0;m<2;m++)
                        {
                            cout<<a[i][j][k][l][m]<<" ";
                        }
                        cout<<endl;
                    }
                }
            }
        }
    }
};

int main()
{
    Matrix obj;

    obj.input();
    obj.display();

    return 0;
}
