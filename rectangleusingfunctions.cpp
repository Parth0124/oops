#include<iostream>
#include<cmath>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;

    public:
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
    int diagonal()
    {
        return sqrt(pow(length,2)+pow(breadth,2));
    }
};

int main()
{
    rectangle r;
    int a,b;
    cout<<"Enter the length and breadth of the rectangle."<<endl;
    cin>>a>>b;
    r.setLength(a);
    r.setBreadth(b);
    cout<<"length: "<<r.getLength()<<endl;
    cout<<"breadth: "<<r.getBreadth()<<endl;
    cout<<"The area, perimeter and the diagonal of the rectangle is"<<endl;
    cout<<r.area()<<endl<<r.perimeter()<<endl<<r.diagonal()<<endl;
}