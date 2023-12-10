#include<iostream>
#include<cmath>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;

    public:
    rectangle(int l=0, int b=0)
    {
       length=l;
       breadth=b; 
    }
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
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
    int diagonalrect()
    {
        return sqrt(pow(length,2)+pow(breadth,2));
    }
};
class cuboid:public rectangle
{
    private:
    int height;

    public:
    cuboid(int l=0, int b=0, int h=0):rectangle(l,b)
    {
        height=h;
        setLength(l);
        setBreadth(b);
    }
    void setHeight(int h)
    {
        height=h;
    }
    int getHeight()
    {
        return height;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;
    }
    int surfacearea()
    {
        return (2*(getLength()*getBreadth()))+(2*(getLength()*height))+(2*(getBreadth()*height));
    }
    int diagonalcuboid()
    {
        return sqrt(pow(getLength(),2)+pow(getBreadth(),2)+pow(height,2));
    }
};

int main()
{
    cuboid c;
    int x,y,z;
    cout<<"Enter the length, breadth and height for rectangle and cuboid."<<endl;
    cin>>x>>y>>z;
    c.setLength(x);
    c.setBreadth(y);
    c.setHeight(z);
    cout<<"Length, breadth and height are "<<c.getLength()<<", "<<c.getBreadth()<<", "<<c.getHeight()<<endl;
    cout<<"The area of the rectangle is "<<c.area()<<endl;
    cout<<"The perimeter of the rectangle is "<<c.perimeter()<<endl;
    cout<<"The diagonal of the rectangle is "<<c.diagonalrect()<<endl;
    cout<<"The volume of the cuboid is "<<c.volume()<<endl;
    cout<<"The surface area of the cuboid is "<<c.surfacearea()<<endl;
    cout<<"The diagonal of the cuboid is "<<c.diagonalcuboid()<<endl;
    return 0;
}