#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;

    public:
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
    complex(int r=0, int i=0)
    {
        real=r;
        img=i;
    }
    complex operator+(complex x)
    {
        complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
};
int main()
{   
    int a,b;
    complex c1,c2,c3;
    cout<<"Enter the real and imaginary part of first comlex number."<<endl;
    cin>>a>>b;
    c1.setReal(a);
    c1.setImg(b);
    int c,d;
    cout<<"Enter the real and imaginary part of the second comlex number."<<endl;
    cin>>c>>d;
    c2.setReal(c);
    c2.setImg(d);
    c3=c1+c2;
    cout<<"The addition of first and second comlex number is "<<c3.getReal()<<"+"<<c3.getImg()<<"i"<<endl;
}

