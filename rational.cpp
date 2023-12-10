#include<iostream>
using namespace std;
class rational
{
    private:
    int p;
    int q;
    public:
    rational()
    {
        p=1;
        q=1;
    }
    rational(int p, int q)
    {
        this->p=p;
        this->q=q;
    }
    rational (rational &r)
    {
        this->p=r.p;
        this->q=r.q;
    }
    void setP(int p)
    {
        this->p=p;
    }
    void setQ(int q)
    {
        this->q=q;
    }
    int getP()
    {
        return p;
    }
    int getQ()
    {
        return q;
    }
    rational operator+(rational r)
    {
    rational z;
    z.p=this->p*r.q+this->q*r.p;
    z.q=this->q*r.q;
    return z;
    }
    
    friend ostream & operator<<(ostream &o, rational &r);
};



ostream & operator<<(ostream &o, rational &r)
{
    o<<r.p<<"/"<<r.q<<endl;
}

int main()
{
    int a,b,c,d;
    rational r1, r2, r3;
    cout<<"Enter the neumerator and the denominator for first rational number."<<endl;
    cin>>a>>b;
    r1.setP(a);
    r1.setQ(b);
    cout<<"Enter the neumerator and the denominator for the second rational number. "<<endl;
    cin>>c>>d;
    r2.setP(c);
    r2.setQ(d);
    r3=r1+r2;
    cout<<"The addition of the two rational numbers is"<<r3;
}
