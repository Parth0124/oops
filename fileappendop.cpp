#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile("To Be Appended File", ios::app);
    outfile<<"The data was left undisturbed while this line was added into the text file."<<endl;
}