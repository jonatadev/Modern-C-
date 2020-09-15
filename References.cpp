#include <iostream>

int main() {
	// A reference type is an alias to an
   //  existing object in memory.References must be initialized.

	 // If we assign a different value to either one of them, they both change as we have one object in
	 // memory, but we are using two different names.
	int x = 123;
	int& y = x;

	x = 456;
	// both x and y now hold the value of 456
	y = 789;
	// both x and y now hold the value of 789


}