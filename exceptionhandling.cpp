#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=0;
    int c;
    try
    {
        if (b==0)
        {
            throw 1;
        }
        else 
        {
            c=a/b;
            cout<<c<<endl;
        }
        
    }
        catch(int e)
        {
            cout<<"Division by zero.";
        }
}