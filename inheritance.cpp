#include<iostream>
using namespace std;
class base
{
    private:
    int x;

    public:
    void setX(int r)
    {
        x=r;
    }
    int getX()
    {
        return x;
    }
    void showX()
    {
        cout<<x<<endl;
    }
};

class derived:public base
{
    private:
    int y;

    public:
    void setY(int r)
    {
        y=r;
    }
    void showY()
    {
        cout<<getX()<<" "<<y<<endl;
    }
};

int main()
{
    int a,b;
    derived d1;
    cout<<"Enter the value for x"<<endl;
    cin>>a;
    d1.setX(a);
    d1.showX();
    cout<<"Enter the value for y"<<endl;
    cin>>b;
    d1.setY(b);
    d1.showY();
    return 0;
}