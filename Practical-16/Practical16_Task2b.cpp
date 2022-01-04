/*Reason: Implicit type conversion doesn’t happen for primitive types,
so in the following program ‘a’ is not implicitly converted to int 
Also there is a special catch block called ‘catch all’ catch(…) that can be used to catch all types of exceptions. 
so a the " Default Exception " error will be thrown ,and not the " Caught " one.

Output: Default Exception */


#include <iostream>
using namespace std;
int main()
{
 try {
 throw 'a';
 }
 catch (int x) {
 cout << "Caught " << x;
 }
 catch (...) {
 cout << "Default Exception\n";
 }
 return 0;
}
