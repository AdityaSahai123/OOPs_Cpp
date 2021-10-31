#include<iostream>
using namespace std;

class Student
{
	public:
	string name;
	int age,marks;
	
	
	friend void marks(Student m[]);
};

void marks(Student arr[])
{
	int sum=0;
	for(int i=0;i<3;i++)
	{
		sum=sum+arr[i].marks;
	}
	cout<<sum<<endl;
}

int main()
{

	Student arr[3];
	
	for(int i=0;i<3;i++)
	{
		cin>>arr[i].name>>arr[i].age>>arr[i].marks;
		
	}
	marks(arr);

	return 0;
}


