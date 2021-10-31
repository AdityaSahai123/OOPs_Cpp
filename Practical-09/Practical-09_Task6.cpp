#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Before Setfill\n";
	cout<<setw(15);
	cout<<1234<<endl;
	cout<<"After Setfill\n";
	cout<<setfill('*')<<setw(15);
	cout<<1234;

	return 0;
}
	
