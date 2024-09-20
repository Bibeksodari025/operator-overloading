// to add the two complex number by using member function
// binary operator overloading
#include<iostream>

using namespace std;

class complex 
{
    float real;
    float img;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    complex(float r, float i)
    {
        real=r;
        img=i;
    }
    void getdata()
    {
        cout<<"enter the value of real and img:";
        cin>>real>>img;
    }
    void showdata()
    {
        cout<<real<<"+i"<<img<<endl;
    }
    // complex operator + (complex c)
    // {
    //     complex temp;
    //     temp.real=real+c.real;
    //     temp.img=img+c.img;
    //     return temp;
    // }
   friend complex operator +(complex cc1,complex cc2);
};
complex operator + (complex cc1,complex cc2)
{
   complex temp;
    temp.real=cc1.real+cc2.real;
    temp.img=cc1.img+cc2.img;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.showdata();
    return 0;
}