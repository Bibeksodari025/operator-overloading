// matrix multiplication using operator overloading
#include<iostream>

using namespace std;

class matrix
{
    int mat[3][3];
    public:
    void getdata()
    {
        cout<<"enter the father name:";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>mat[i][j];
            }
        }
    }
    matrix operator * (matrix m)
    {
        int sum;
        matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                sum=0;

                for(int k=0;k<3;k++)
                {
                    sum=sum+mat[i][k]*m.mat[k][j];
                }
                temp.mat[i][j]=sum;
            }
        }
        return temp;
    }
    void showdata()
    {
        cout<<"the product of matrix:"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<mat[i][j] <<"\t" ;
            }
            cout<<endl;
        }
    }
};
int main()
{
    matrix a,b,c;
    a.getdata();
    b.getdata();
    c=a*b;
    c.showdata();
    return 0;
}