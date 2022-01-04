#include<iostream>
using namespace std;
class parent{
public:
void display1()
{
    cout<<"\nInside parent";
}
};
class child:public parent{
public:
void display2()
{
    cout<<"\nInside child display calling parent display";
    display1(); //calling parent class method without creating its object
}
};
int main()
{
    child obj;
    obj.display2();
    cout<<"\n";
    obj.display1();
}