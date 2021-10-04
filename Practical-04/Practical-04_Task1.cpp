
#include<iostream>
 namespace first
{
	int add (int a,int b)
	{
	 	return a+b;
	}
}

 namespace second
{
	float add (float a,float b)
	{
		return a+b;
	}
}

int main()
{
  std::cout<<first::add(5,8)<<std::endl;
  std::cout<<second::add(5.8,8.5)<<std::endl;
}
