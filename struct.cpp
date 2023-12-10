#include<iostream>
using namespace std;
struct //refer the gfg struct document. 
{
    int age;
    string fname;
    string lname;
    int std;
}student;

int main()
{
    cin>>student.age>>student.fname>>student.lname>>student.std;
    cout<<student.age<<" "<<student.fname<<" "<<student.lname<<" "<<student.std<<endl;
}
