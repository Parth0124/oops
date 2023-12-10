#include<iostream>
#include<cmath>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
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
    rectangle r1,r2;
    rectangle *p;
    p=&r2;
    cout<<"Enter the length and breadth of the first erctangle."<<endl;
    cin>>r1.length>>r1.breadth;
    cout<<"Enter the length and breadth of the second rectangle."<<endl;
    cin>>p->length>>p->breadth;
    cout<<"The area, perimeter and the diagonal of the first rectangle is"<<endl;
    cout<<r1.area()<<endl<<r1.perimeter()<<endl<<r1.diagonal()<<endl;
    cout<<"The area, perimeter and diagonal of the second rectangle is"<<endl;
    cout<<p->area()<<endl<<p->perimeter()<<endl<<p->diagonal()<<endl;
}