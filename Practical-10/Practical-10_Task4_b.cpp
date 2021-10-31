// Adding two objects using operator overloading
#include<bits/stdc++.h>
using namespace std;

class obj
{
	int n;
	public:
	
		void getnum(int x)
		{
			n=x;
		}
		
		void dispnum()
		{
			cout<<"Sum: "<<n<<endl;
		}
		
		obj operator +(obj &num)
		{
			obj x;
			x.n=this->n + num.n;
			return (x);
		}
};

int main()
{
	obj obj1,obj2,sum;
	
	obj1.getnum(5);
	obj2.getnum(10);
	
	sum=obj1+obj2;
	
	sum.dispnum();
	
	return 0;
}

