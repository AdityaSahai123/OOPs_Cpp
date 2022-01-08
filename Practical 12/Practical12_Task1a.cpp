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

class B:public A {
public:
void display() {
cout<<"Inside B Class\n";
x = 10;
y = 20;//z cannot be accessed because they are private in the parent class A
//z = 30;
cout<<x<<endl<<y<<endl;
}
};

int main() {
B obj;
obj.x;
//here y and z cannot be accessed because they are private and protected in the parent class A
//obj.y;
//obj.z; 
obj.display();

return 0;
}