#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("Parth.txt");
    outfile<<"Hello Parth! This is your first file handling project."<<endl;
    outfile<<"You are doing great. Keep up the good work."<<endl;
}