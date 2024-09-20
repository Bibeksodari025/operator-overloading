// example problem of unary operator overloading using member function
// to add the  two complex number

#include<iostream>

using namespace std;
class complex 
{
    float real;
    float img;
    public:
    complex()
    {
        real=0.0;
        img=0.0;
    }
    complex(float r,float i)
    {
        real=r;
        img=i;
    }
    void showdata()
    {
        cout<<"the sum is:"<<endl;
        cout<<real<<"+i"<<img<<endl;
    }
    complex operator ++()
    {
        complex temp;
        temp.real=++real;
        temp.img=++img;
        return temp;
    }
    complex operator ++ (int)
    {
        complex temp;
        temp.real=real++;
        temp.img=img++;
        return temp;
    }
};
int main()
{
    complex c1(1,2),c2(4,5),c3;
    c2=++c1;//c2=c1.operator ++()
    c3=c2++;//c3=c2.operator ++(int)
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}