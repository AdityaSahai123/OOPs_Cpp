#include<iostream>
class A
{
    public:
    ~A()
    { 
    std::cout<<"\nInside destructor of class A";
     }
};

class B:public A
{
    public:
    ~B()
    { 
    std::cout<<"\nInside destructor of class B";
     }
};

class C:public B
{
    public:
    ~C()
    { 
    std::cout<<"\nInside destructor of class C";
     }
};
int main()
{
    C obj; //checking the destructor calling path
}