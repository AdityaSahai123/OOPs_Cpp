#include<iostream>
using namespace std;

class test
{
	int objno;
	static int objcnt;

	public: 
		
		test()
		{	
			objno=++objcnt;	
		}
	
		~test()
		{
			--objcnt;
		}

		void printobjnum()
		{
			cout<<"Object Number: "<<objno<<endl;
		}
		
		static void printobjc()
		{
			cout<<"Count: "<<objcnt<<endl;	
		}
};

int test::objcnt;

int main()
{
	test t1,t2,t3;
	test::printobjc();

	t1.printobjnum();
	t2.printobjnum();
	t3.printobjnum();
	
	return 0;
}
