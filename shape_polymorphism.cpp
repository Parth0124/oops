#include<iostream>
#include<cmath>
using namespace std;
class shape
{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;
};
class rectangle:public shape
{
    private:
    float length;
    float breadth;

    public:
    rectangle(float l, float b)
    {
        length=l;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
};
class circle: public shape
{
    private:
    float radius;
    float pi=3.14;

    public:
    circle(float r)
    {
        radius=r;
    }
    float area()
    {
        return pow(radius,2)*pi;
    }
    float perimeter()
    {
        return 2*pi*radius;
    }
};

int main()
{
    shape *s=new rectangle(10,5);
    cout<<"The area of the rectangle is "<<s->area()<<endl;
    cout<<"The perimeter of the rectangle is "<<s->perimeter()<<endl;

    shape *c=new circle(2.5);
    cout<<"The area of the circle is "<<c->area()<<endl;
    cout<<"The perimeter of the circle is "<<c->perimeter()<<endl;
}