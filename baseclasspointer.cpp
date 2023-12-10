#include<iostream>
using namespace std;
class base
{
    public:
    void func1()
    {
        cout<<"Fun of base 1"<<endl;
    }
};
class derived: public base
{
    public:
    void func2()
    {
        cout<<"fun of derived 1"<<endl;
    }
};

int main()
{
    derived d;
    derived *ptr=&d; /*base class pointer can access only functions of base class and not derived class even when the pointer points to the derived class object.to access the derived class function u need to create a pointer of derived class and point it to the object.*/
    ptr->func1();
    ptr->func2();
}