#include<bits/stdc++.h>
using namespace std;

class Student
{
	public: 
		string name;
		int age;
		int year;
		char sec;
		int total;
		
	void Total(Student arr[]);
};

void Total(Student arr[])
{
	int sum=0;

	for(int i=0;i<3;i++)
	{
		sum=sum+arr[i].total;
	}

	cout<<"Total Marks of the Students: "<<sum;
}

int main()
{
	Student arr[3];
	for(int i=0;i<3;i++)
	{
		cin>>arr[i].name>>arr[i].age>>arr[i].year>>arr[i].sec>>arr[i].total;	
	}
	Total(arr);

	return 0;
}
