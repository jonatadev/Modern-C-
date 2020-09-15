#include <iostream>
#include <string>

int main() { 
	//When we want to have a read - only object or promise not to change the value of some
	//object in the current scope, we make it a constant.C++ uses the const type qualifier to
    //mark the object as a read - only.We say that our object is now immutable.

	const int n = 5; // const-qualified
	// Constants are not modifiable, attempt to do so results in a compile - time error.
	n++; // error, can’t modify a read-only object

	//constexpr.It is a constant
		//that can be evaluated at compile - time
	constexpr double d = 456.78;
	int x = 123;
	constexpr int n2 = x; // known during compile-time
   



}