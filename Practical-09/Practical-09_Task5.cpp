/* By default, all the members of the structure are public. In contrast, all members of the class are private.
The structure will automatically initialize its members. In contrast, constructors and destructors are used to initialize the class members.
When a structure is implemented, memory allocates on a stack. In contrast, memory is allocated on the heap in class.
Variables in a structure cannot be initialized during the declaration, but they can be done in a class.
There can be no null values in any structure member. On the other hand, the class variables may have null values.
A structure is a value type, while a class is a reference type.
Operators to work on the new data form can be described using a special method.*/

#include<bits/stdc++.h>
using namespace std;

class College
{
	int x;//By default x is private
};

struct student
{
	int a;//by default a is public
};

	/*When deriving a struct from a class/struct, 
	the default access-specifier for a base class/struct is public. 
	And when deriving a class, the default access specifier is private. */

struct Derived : College { };
int main()
{
	College t;
	student y;
	
	t.x=20;//this will give compilation error
	y.a=30;//this will work fine

	return 0;
}
