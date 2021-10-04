#include<iostream>


int add (int a,int b)
{
	return a+b;
}


float add (float a,float b)
{
	return a+b;
}


namespace first;
namespace second;

int main()
{
  cout<<add(5,8)<<endl;
  cout<<add(5.8f,8.5f)<<endl;

  return 1;
}
