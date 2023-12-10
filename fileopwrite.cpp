#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("edit.txt");
    outfile<<"I just finished my presentation for industrial pschology."<<endl;
    outfile<<"I now started working with OOPS"<<endl;
    outfile<<"I am also thinking about resuming webdev."<<endl;
    outfile<<"69"<<endl;
}