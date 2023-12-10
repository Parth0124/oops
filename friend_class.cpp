#include<iostream>
using namespace std;
class sad;
class happy
{
    private:
    int a;

    public:
    happy()
    {
       a=10;
    }
    friend class sad;
};
class sad
{
    public:
    happy h;
    int fun1()
    {
        cout<<2*h.a<<endl;
    }
};

int main()
{
    sad s;
    s.fun1();
}