#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile ("Aai.txt");
    outfile<<"Hello! I am Anuradha Abhang, the mother of Parth Abhang and Arnav Abhang."<<endl;
    outfile<<"I am 40 years old."<<endl;
    outfile<<"41"<<endl;
    outfile.close();
}