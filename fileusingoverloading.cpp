#include<iostream>
#include<fstream>
using namespace std;
class student
{
    public: 
    string name;
    int roll;
    string branch;
    void setname(string a)
    {
        name=a;
    }
    void setroll(int b)
    {
        roll=b;
    }
    void setbranch(string c)
    {
        branch=c;
    }
    friend ofstream & operator<<(ofstream &ofs, student &s1);
    friend ifstream & operator>>(ifstream &ifs, student &s1);
};

ofstream & operator<<(ofstream &ofs, student &s1)
{
    ofs<<s1.name<<endl;
    ofs<<s1.roll<<endl;
    ofs<<s1.branch<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs, student &s1)
{
    ifs>>s1.name>>s1.roll>>s1.branch;
    return ifs;
}

int main()
{
    string a,c;
    int b;
    student s1;
    cout<<"Enter the name, roll no and branch of the student."<<endl;
    cin>>a>>b>>c;
    s1.setname(a);
    s1.setroll(b);
    s1.setbranch(c);
    ofstream outfile("student.txt", ios::trunc);
    outfile<<s1.name<<endl;
    outfile<<s1.roll<<endl;
    outfile<<s1.branch<<endl;

    ifstream infile("student.txt");
    string line1;
    int x;
    string line2;
    getline(infile,  line1);
    infile>>x;
    getline(infile, line2);
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll: "<<s1.roll<<endl;
    cout<<"Branch: "<<s1.branch<<endl;
    infile.close();
}
