#include<iostream>
using namespace std;
class student
{   
    private:
    int roll;
    string name;
    int mathmarks;
    int phymarks;
    int chemmarks;

    public:
    student(int r, string n, int p, int m, int c)
    {
        roll=r;
        name=n;
        mathmarks=m;
        phymarks=p;
        chemmarks=c;
    }
    int total()
    {
        return mathmarks+phymarks+chemmarks;
    }
    char grade()
    {
        float average=total()/3;
        if (average>60)
        return 'A';
        else if (average>40 && average<60)
        return 'B';
        else 
        return 'C';
    }
};

int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter the roll no of thestudent"<<endl;
    cin>>roll;
    cout<<"Enter the name of the student"<<endl;
    cin>>name;
    cout<<"Enter the marks of the three subjects"<<endl;
    cin>>m>>p>>c;
    student s(roll,name,m,p,c);
    cout<<"Total marks are: "<<s.total()<<endl;
    cout<<"grade: "<<s.grade()<<endl;
}    