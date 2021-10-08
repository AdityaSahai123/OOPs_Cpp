#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s1,s2;
  cout<<"Enter the First String"<<endl;
  cin >> s1;
  cout << "Enter the Second String " <<endl;
  cin >> s2;

  int n = s1.size();
  int m = s2.size();

  if(s1.size()!=s2.size())
  {
    cout << " Strings are unequal "<<endl;
    return 0;
  }

  int max = n > m ? n:m;

  for(int i=0;i< max;i++)
   {
      if(s1[i]!=s2[i])
      {
         cout << " Strings are Unequal " <<endl;
         return  0;
      }
   }
   cout<<"Strings are Equal" <<endl;
  return 0;
}