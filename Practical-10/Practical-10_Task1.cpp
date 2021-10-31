/*WAP to create a directory that contains the following information.
(a) Name of a person
(b) Address
(c) Telephone Number (if available with STD code)
(d) Mobile Number (if available)
(e) Head of the family*/


#include<bits/stdc++.h>
using namespace std;

class family
{
	public:
	string name;
	string ad;
	long long int pn;
	long long int mn;
	string h;
};

int main(){

	family arr[3];
	
	for(int i=0;i<3;i++)
	{
		
		cin>>(arr[i].name);
	
		cin>>(arr[i].ad);
		
		cin>>arr[i].pn;
		
		cin>>arr[i].mn;
		
		cin>>(arr[i].h);
	}
	
	cout<<endl;
	
	
	for(int i=0;i<3;i++)
	{
		cout<<"Name: "<<arr[i].name<<" ";
		cout<<"Address: "<<arr[i].ad<<" ";
		cout<<"Phone Number: "<<arr[i].pn<<" ";
		cout<<"Mobile Number: "<<arr[i].mn<<" ";
		cout<<"Head of the family: "<<arr[i].h;
		cout<<endl;
	}

	return 0;

}
	
