#include <fstream>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string data; 
    ofstream myfile1;
    myfile1.open("example2.txt"); 
    cout<<"Inside example2\n";                
    myfile1<<"Write this\n";
    myfile1.close();
    
    return 0;
}