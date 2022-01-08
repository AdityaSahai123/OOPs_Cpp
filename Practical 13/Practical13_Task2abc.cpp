#include<iostream>
using namespace std;

class base {
    public:
    virtual int add(int a, int b) { // due to virtual keyword this is ignored at compile bind time..........virtual keyword use for dynamic binding
        return (a+b);
    }
     
    float add(float a, float b) {
        return (a+b);
    }

    int add(int a, int b, int c) {
        return (a+b+c);
    }

    virtual int multi(int a,int b) = 0; // due to abstraction compiler will not bind this at compile time
    // abstraction comes because of this
    // only create the definition of the pure virtual function 

    int sub(int a, int b);// this will not affect the code
};

class child: public base{
    public:
    using base::add;
    int add(int a, int b) {
        return (a+b+1);
    }  

    int multi(int a, int b) {   // during runtime this definition will be followed
        return (a*b);           // abstraction definition is here
    }
};

int main() {
   child c;
   base *p;
   p = &c;
   cout<<p->multi(1,2)<<endl;
   cout<<p->add(1,2);
    
}