#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;

    public:
    complex (int r=0, int i=0)
    {
        real=r;
        img=i;
    }
    void setReal(int r)
    {
        real=r;
    }
    void setImg(int i)
    {
        img=i;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    friend complex operator+(complex c1,complex c2);
};
complex operator+(complex c1,complex c2)
{
    complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
}

int main()
{
    complex c1,c2,c3;
    int a,b;
    cout<<"Enter the real and imaginary part of the first complex number."<<endl;
    cin>>a>>b;
    c1.setReal(a);
    c1.setImg(b);
    int c,d;
    cout<<"Enter the real and imaginary part of the second complex number."<<endl;
    cin>>c>>d;
    c2.setReal(c);
    c2.setImg(d);
    c3=c1+c2;
    cout<<"The sum of the first and second complex number is "<<c3.getReal()<<"+"<<c3.getImg()<<"i"<<endl;
}

