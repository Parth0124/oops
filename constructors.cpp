#include<iostream>
#include<cmath>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
    rectangle (int l=1, int b=1) //parametrized constructors
    {
        setLength(l);
        setBreadth(b); 
    }
    rectangle(rectangle &r)   //copy constructors
    {
        length=r.length;
        breadth=r.breadth;
    }
    void setLength(int l)
    {
        if (l>0)
        length=l;
        else 
        length=1;
    }
    void setBreadth(int b)
    {
        if (b>0)
        breadth=b;
        else
        breadth=1;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    int diagonal()
    {
        return sqrt(pow(length,2)+pow(breadth,2));
    }
};

int main()
{
    rectangle r1(10,30);
    rectangle r2(r1);
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
    cout<<r2.diagonal()<<endl;
}