#include<iostream>
using namespace std;

class base {
    public:
    int add(int a, int b) {
        return (a+b);
    }
     
    float add(float a, float b) {
        return (a+b);
    }

    int add(int a, int b, int c) {
        return (a+b+c);
    }
};

class child: public base{
    public:
    using base::add;
    /*not able to access int add(int a,int b) method of base class with using also*/
    int add(int a, int b) {
        return (a+b+1);
    }  
};

int main() {
    base obj1;
    // cout<<obj1.add(10,20);
    child obj2;
    cout<<obj2.add(5.1f,10.1f);
    
}