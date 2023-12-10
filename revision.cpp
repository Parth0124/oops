#include<iostream>
#include<cmath>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
    rectangle(int l, int b)
    {
        setlength(l);
        setbreadth(b);
    }
    void setlength(int l)
    {
        if (l>0)
        {
            length=l;
        }
        else
        {
            length=1;
        }
    }
    void setbreadth(int b)
    {
        if (b>0)
        {
            breadth=b;
        }
        else
        {
            breadth=1;
        }
        
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
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
    int diagonalofrectangle()
    {
        return sqrt(pow(length,2)+pow(breadth,2));
    }
};

class cuboid: public rectangle
{
    private:
    int height;

    public:
    cuboid(int l, int b, int h):rectangle(l,b)
    {
        setheight(h);
    }
    void setheight(int h)
    {
        if (h>0)
        {
            height=h;
        }
        else
        {
            height=1;
        }
    }
    int getheight()
    {
        return height;
    }
    int volume()
    {
       return getlength()*getbreadth()*height;
    }
    int surfacearea()
    {
       return 2*(getlength()*getbreadth())+2*(getbreadth()*height)+2*(getlength()*height);
    }
    int diagonal()
    {
       return sqrt(pow(getlength(),2)+pow(getbreadth(),2)+pow(height,2));
    }
};
int main()
{
    int x,y,z;
    cout<<"Enter the value of x,y and z"<<endl;
    cin>>x>>y>>z;
    cuboid c1(x,y,z);
    cout<<c1.getlength()<<endl;
    cout<<c1.getbreadth()<<endl;
    cout<<c1.getheight()<<endl;
    cout<<c1.area()<<endl;
    cout<<c1.perimeter()<<endl;
    cout<<c1.diagonalofrectangle()<<endl;
    cout<<c1.volume()<<endl;
    cout<<c1.surfacearea()<<endl;
    cout<<c1.diagonal()<<endl;
}
