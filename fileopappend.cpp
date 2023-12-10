#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("edit.txt", ios::app);
    outfile<<"The original data is appended and the new text is also added."<<endl;
}