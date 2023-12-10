#include<iostream>
using namespace std;
namespace first
{
    void fun()
{
    cout<<"Function  is first."<<endl;
}
}
namespace second
{
void fun()
{
    cout<<"Function is second."<<endl;
}
}
using namespace first;
int main()
{
    fun();
    second::fun();
}