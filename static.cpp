#include<iostream>
using namespace std;
class test
{
    private:
    int a;
    int b;
    
    public:
    static int count;
    test()
    {   
        a=10;
        b=10;
        count++;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
};
int test::count=0;
int main()
{
    test t;
    cout<<t.geta()<<endl;
    cout<<t.getb()<<endl;
    cout<<test::count<<endl;
    test t2;
    cout<<t2.geta()<<endl;
    cout<<t2.getb()<<endl;
    cout<<test::count<<endl;
}