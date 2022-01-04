#include <fstream>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string data; 
    ifstream myfile;                                       
    myfile.open("example1.txt");
    myfile>>data;
    cout<<data<<endl;     
    myfile.close();
    
    return 0;
}