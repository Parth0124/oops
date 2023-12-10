#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile ("To Be Appended File");
    outfile<<"This data should be kept intact while adding extra data into the file."<<endl;
}