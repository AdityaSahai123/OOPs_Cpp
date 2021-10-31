//WAP to pass two variables in a parameterized constructor during object creation and have same names variables as class member data and constructor parameters. Your job is to calculate the remainder of those two numbers.

#include<bits/stdc++.h>
using namespace std;

class test
{
	private:
	int a,b;
	
	public:
	test(int a1,int b2)
	{
		a=a1;
		b=b2;
	}
	
	void rem()
	{
		int r;
		if(a>b)
			r=a%b;
		else
			r=b%a;
	
		cout<<r<<endl;
	}
};

int main()
{

	test c1(6,5);
	c1.rem();
	
	return 0;
}
