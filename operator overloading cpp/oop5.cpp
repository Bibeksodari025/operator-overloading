//wap to achive the operator c2=9*c1;
#include<iostream>

using namespace std;

class complex 
{
    float real;
    float img;
    public:
    void getdata()
    {
        cout<<"enter the real and imaginary :"<<endl;
        cin>>real>>img;
    }
    void display()
    {
        cout<<"real="<<"+i"<<img<<endl;
    }
    friend complex operator *(int p,complex c);
};
complex operator *(int p,complex c)
{
    complex  temp;
    temp.real=p*c.real;
    temp.img=p*c.img;
    return temp;
}
int main()
{
    complex c1,c2;
    c1.getdata();
    c2=9*c1;
    c2.display();
    return 0;
}