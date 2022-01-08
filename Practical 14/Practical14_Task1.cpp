#include<iostream>
using namespace std;

class base {
    public:
    virtual int add(int a, int b) { // virtual keyword is added for dynamic binding and this fuction will be ignored at runtime and access the 
        return (a+b);               // definition of funciton from child class
    }

    int multi(int a, int b) {
        return (a*b);
    }
};

class child: public base{
    public:
    int add (int a, int b) {
        return (a+b+1);
    }
};

int main() {
    child c;
    base b;
    base *p;
    p = &c;
    cout<<p->add(1,2);
    cout<<p->multi(1,2);
    
}