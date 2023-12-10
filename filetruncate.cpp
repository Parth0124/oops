#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("Parth.txt");
    outfile<<"This is the truncated version of the file."<<endl;
}