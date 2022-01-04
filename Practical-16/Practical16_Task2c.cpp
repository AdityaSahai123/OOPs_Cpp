/* The program terminates as catch statement takes int but program is throwing a char so the program terminates after
      throwing instance.*/


#include <iostream>
using namespace std;
int main()
{
 try {
 throw 'a';
 }
 catch (int x) {
 cout << "Caught ";
 }
 return 0;
}