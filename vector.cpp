#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={2,4,6,8,10};
    v.push_back(20);
    v.push_back(30);

    vector<int>::iterator itr;
    cout<<"Using itterator"<<endl;
    for(itr=v.begin(); itr!=v.end(); itr++)
    {
        cout<<itr<<endl;
    }
}