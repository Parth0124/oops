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
    rectangle *r1=new rectangle;
    rectangle *r2=new rectangle;
    cout<<"Enter the length and breadth of the first rectangle"<<endl;
    cin>>r1->length>>r1->breadth;
    cout<<"Enter the length and breadth of the secind rectangle."<<endl;
    cin>>r2->length>>r2->breadth;
    cout<<"The area,perimeter and the diagonal of the first rectangle are"<<endl;
    cout<<r1->area()<<endl<<r1->perimeter()<<endl<<r1->diagonal()<<endl;
    cout<<"The area,perimeter and the diagonal of the second rectangle are"<<endl;
    cout<<r2->area()<<endl<<r2->perimeter()<<endl<<r2->diagonal()<<endl;
}