#include<iostream>
using namespace std;

class A {
public:
int x;
protected:
int y;
private:
int z;

};

class B:protected A {
public:
void display() {
x = 10;
y = 20; 
// z cannot be accessed becaus it is private in the parent class A
//z = 30;
cout<<x<<endl<<y<<endl;
}
};

int main() {
B obj;
//here x , y and z cannot be accessed as x and y are protected in child class B and z is private
//obj.x;
//obj.y;
//obj.z; 
obj.display();

return 0;
}