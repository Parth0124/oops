#include<iostream>
#include<fstream>
using namespace std;
class item
{
    private:
    string name;
    float price;
    int quantity;

    public:
    item(string n, float p, int q)
    {
        name=n;
        price=p;
        quantity=q;
    }
    string getname()
    {
        return name;
    }
    float getprice()
    {
        return price;
    }
    int getquantity()
    {
        return quantity;
    }
    friend ofstream & operator<<(ofstream &ofs, item &i);
    friend ifstream & operator>>(ifstream &ifs, item &i);
};

ofstream & operator<<(ofstream &ofs, item &i)
{
    ofs<<i.name<<endl;
    ofs<<i.price<<endl;
    ofs<<i.quantity<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs, item &i)
{
    ifs>>i.name>>i.price>>i.quantity;
    return ifs;
}

int main()
{
    string n;
    float p;
    int q;
    int a;
    cout<<"Enter the number of items: "<<endl;
    cin>>a;
    item *list[a];
    for(int i=1; i<=a; i++)
    {
        cout<<"Enter the name, price and quantity of the "<<i<<" item"<<endl;
        cin>>n;
        cin>>p;
        cin>>q;
        list[i]= new item(n,p,q);
    }

    ofstream ofs("list.txt");
    for(int i=1; i<=a; i++)
    {
        ofs<<*list[i];
    }

    item i1(n,p,q);
    ifstream ifs("list.txt");
    string line1;
    float y;
    int x;
    getline(ifs, line1);
    ifs>>y;
    ifs>>x;
    for(int i=1; i<=a;i++)
    {
        cout<<"Name: "<<list[i]->getname()<<endl;
        cout<<"Price: "<<list[i]->getprice()<<endl;
        cout<<"Quantity: "<<list[i]->getquantity()<<endl;
    }
    
    return 0;
}