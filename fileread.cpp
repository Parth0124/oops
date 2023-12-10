#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("Aai.txt");
    string line1;
    string line2;
    int x;
    getline(infile,line1);
    getline(infile,line2);
    infile>>x;
    cout<<line1<<endl<<line2<<endl<<x<<endl;    
    if(infile.eof())
    {
        cout<<"This is the end of the file. Thank You. !"<<endl;
    }
    infile.close();
}