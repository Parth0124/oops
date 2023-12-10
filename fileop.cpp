#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("edit.txt");
    if (!infile.is_open())
    {
        cout<<"The file is not existing."<<endl;
    }
    else
    {
    string line1;
    string line2;
    string line3;
    int x;
    string line4;
    getline(infile, line1);
    getline(infile, line2);
    getline(infile, line3);
    infile>>x;
    getline(infile, line4);
    cout<<line1<<endl<<line2<<endl<<line3<<endl<<x<<endl<<line4<<endl;
    if (infile.eof())
    {
        cout<<"This is the end of file."<<endl;
    }
    }
}