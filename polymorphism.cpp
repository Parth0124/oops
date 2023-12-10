#include<iostream>
using namespace std;
class car
{
    public:
    virtual void start()=0;  //virtual function
    
    virtual void stop()=0;   //virtual function
   
};
class innova: public car
{
    public:
    void start()
    {
        cout<<"Innova started."<<endl;
    }
    void stop()
    {
        cout<<"Innova stopped."<<endl;
    }
};
class swift:public car
{
    public:
    void start()
    {
        cout<<"Swift started."<<endl;
    }
    void stop()
    {
        cout<<"Swift stopped."<<endl;
    }
};
int main()
{
    car *c=new innova();
    c->start();
    c->stop();
    car *p=new swift();
    p->start();
    p->stop();
}