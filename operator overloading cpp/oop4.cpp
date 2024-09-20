// wap to achive the operational linr c2=c1+5 and c2=5+c1 whwre c1 and c2 are the object of type complex
#include<iostream>

using namespace std;

class complex 
{
    float real;
    float img;
    public:
    void getdata()
    {
        cout<<"enter the real and imaginary:"<<endl;
        cin>>real>>img;
    }
    void display()
    {
        cout<<"real="<<"+i"<<img<<endl;
    }
    complex operator +(int p)
    {
        complex temp;
        temp.real=real+p;
        temp.img=img+p;
        return temp;
    }
    friend complex operator +(int p,complex c);
};
complex operator +(int p,complex c)
{
    complex temp;
    temp.real=p+c.real;
    temp.img=p+c.img;
    return temp;
}
int main()
{
    complex c1,c2;
    c1.getdata();
    c2=c1+5;
    cout<<"addition using the member function:"<<endl;
    c2.display();
    c2=5+c1;
    cout<<"addition using the friend function:"<<endl;
    c2.display();
    return 0;
}