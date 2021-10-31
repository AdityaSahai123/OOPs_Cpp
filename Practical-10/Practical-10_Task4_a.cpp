// WAP, in which you write a friend function to overload a less than '<' operator in C++.

#include<bits/stdc++.h>
using namespace std;
class Test2;
class Test1
{
	int a;

	public:
	void getA(){
		cin>>a;
	}

	friend void operator <(Test1, Test2);
};



class Test2
{
	int b;

	public:
	void getB(){
		cin>>b;
	}

	friend void operator <(Test1, Test2);
};

void operator <(Test1 t1, Test2 t2)
{
	(t1.a<t2.b)?cout<<"a is less than b":cout<<"b is less than a"<<endl;
}

int main()
{
	Test1 t1;
	Test2 t2;
	
	t1.getA();
	t2.getB();

	t1<t2;
}










































