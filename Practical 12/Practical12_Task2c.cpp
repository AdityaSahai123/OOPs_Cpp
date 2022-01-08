#include<iostream>
class A
{
    protected:
    int a;
    public:
    A(int a)
    { 
      this->a=a;
     }
     
};

class B:public A
{
    int b;
    public:
    
    B(int b):A(b)
    { 
       this->b=b;
     }
     void display()
     {
         std::cout<<"a="<<a;
         std::cout<<"\nb="<<b;
     }
};


int main()
{
    B obj(5); 
    obj.display();
}