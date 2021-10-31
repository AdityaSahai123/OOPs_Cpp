#include<iostream>
using namespace std;

class Area
{
	public:
  	int a;
	Area()
	{
		a=0;
	}

	void Aro(int l,int b)
	{
		a=l*b;
		cout<<"Area of Rectangle: "<<a<<endl;
	}

	void Aro(int p)
	{
		a=p*p;
		cout<<"Area of Square: "<<a<<endl;
	}
};

int main()
{
	Area obj;
	obj.Aro(6,5);
	obj.Aro(5);
	
	return 0;
}
