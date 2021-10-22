#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main()
{
  int arr[] = {10,20,30};
  int *ptr = arr;
  cout << *ptr << endl;
  ptr++;
  cout << *ptr << endl;
  return 0;
}
