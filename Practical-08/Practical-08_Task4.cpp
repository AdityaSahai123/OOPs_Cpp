#include<iostream>
using namespace std;

void fact(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}		

	cout<<f;
}
int main()
{
	int n;
	cin>>n;
	fact(n);
	return 0;
}

