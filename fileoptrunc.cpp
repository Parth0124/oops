#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("edit.txt");
    outfile<<"The file is now truncated."<<endl;
}