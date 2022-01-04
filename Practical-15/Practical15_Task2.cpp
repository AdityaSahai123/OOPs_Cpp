#include <fstream>
#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    cout<<"Ios functions"<<endl<<endl;
   
    int n=705;
     cout<<"In decimal="<<dec<<n<<endl;                       
      cout<<"In hexadecimal="<<hex<<n<<endl;                  
      char a,b,c;
      istringstream s("  123");
        s>>skipws>>a>>b>>c;
     cout<<"Printing a b c using spikws:"<<a<<b<<c<<endl;       
      istringstream p("  123");
       p>>noskipws>>a>>b>>c;
      cout<<"Printing a b c using noskipws:"<<a<<b<<c<<endl<<endl;
      
       cout<<"Istream functions"<<endl<<endl;
       istringstream x("  Hello world");
       string line;
       getline(x>>ws,line);
       cout<<"Using ws functions="<<line<<endl<<endl;
       
       cout<<"Using ostream functions endl"<<endl;
       cout<<"Hello"<<endl<<"World";                              
    return 0;
}