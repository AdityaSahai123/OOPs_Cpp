#include<iostream>
class A
{
    public:
    A()
    { 
    std::cout<<"\nInside class A";
     }
};

class B:public A
{
    public:
    B()
    { 
    std::cout<<"\nInside class B";
     }
};

class C:public B
{
    public:
    C()
    { 
    std::cout<<"\nInside class C";
     }
};
int main()
{
    C obj;
}