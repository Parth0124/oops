#include<iostream>
using namespace std;
class base
{
    public:
    virtual void func1() //virtual when defined displays the function of dervied class even when the pointer is of the base class.
    {
        cout<<"Fun of base class";
    }
};
class derived:public base
{
    public:
    void func1()
    {
        cout<<"fun of derived class";  //virtual is used to call the derived class function during base class pointer and derived calss object
    }
};
int main()
{
    base *p=new derived();  //object is created using new delete method where the pointer of th ebase calss is used to create a new object only in heap
    p->func1();
}