#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  string s1,s2;
  cout<<"Enter the First String"<<endl;
  cin >> s1;
  cout << "Enter the Second String " <<endl;
  cin >> s2;
  int ans = s1.compare(s2);

   if(ans==0)
	cout<<"Strings are equal"<<endl;

    else 
	cout << " Strings are Unequal " <<endl;

  return 0;
}
