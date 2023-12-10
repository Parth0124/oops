#include<iostream>
#include<cmath>
using namespace std;
class employee
{
    private:
    int id;
    string name;

    public:
    employee(int eid=0, string n="")
    {
        id=eid;
        name=n;
    }
    void setEID(int r)
    {
        id=r;
    }
    void setName(string n)
    {
        name=n;
    }
    int getEID()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
};

class fulltimeemployee:public employee
{
    private:
    int salary;

    public:
    fulltimeemployee( int eid, string n, int s=0):employee(eid, n)
    {
        salary=s;
    }
    void setSalary(int s)
    {
        salary=s;
    }
    int getSalary()
    {
        return salary;
    }
};

class parttimeemployee: public employee
{
    private:
    int wage;

    public:
    parttimeemployee(int eid, string n, int w=0):employee(eid,n)
    {
        wage=w;
    }
    void setWage(int w)
    {
        wage=w;
    }
    int getWage()
    {
        return wage;
    }
};

int main()
{
    
    string a,b;
    int c,d;
    int r1,r2;

    cout<<"Enter the identity number of the two employee."<<endl;
    cin>>r1>>r2;

    cout<<"Enter the names of the first and second employee"<<endl;
    cin>>a>>b;

    cout<<"Enter the wages of the two employees"<<endl;
    cin>>c>>d;

    parttimeemployee p1 (r1,a,c);
    parttimeemployee p2 (r2,b,d);

    cout<<"The wages of the two employee "<<p1.getName()<<" and "<<p2.getName()<<" with id number "<<p1.getEID()<<" and "<<p2.getEID()<<" are "<<p1.getWage()<<" and "<<p2.getWage()<<endl;

   return 0;
}
