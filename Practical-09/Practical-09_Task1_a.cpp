#include<bits/stdc++.h>
using namespace std;

class Students{

	public:
		int rollno;
		long long int pn;
		string ad;
};

int main()
{
	Students Sam;
	Students John;

	Sam.rollno= 2018111;
	John.rollno= 2018117;
	Sam.pn= 9145621012;
	John.pn= 9182910181;
	Sam.ad="17 Albert Street, California, USA";
	John.ad="19 Lord Street, London, Britain";

	cout<<"Sam's Roll Number:  "<<Sam.rollno<<endl;
	cout<<"Sam's Roll Number:  "<<John.rollno<<endl<<endl;
	cout<<"Sam's Phone Number:  "<<Sam.pn<<endl;
	cout<<"John's Phone Number:  "<<John.pn<<endl<<endl;
	cout<<"Sam's Address:  "<<Sam.ad<<endl;
	cout<<"John's Address:  "<<John.ad<<endl;
	return 0;
}
