#include <iostream>
#include <string>

// Passing by Value/Copy
void myfunction(int byvalue)
{
	std::cout << "Argument passed by value: " << byvalue;
}

// Passing by Reference
void myfunctionRef(int& byreference) // O Endereço
{
	byreference++; // we can modify the value of the argument
	std::cout << "Argument passed by reference: " << byreference;
}

// We use passing by const reference for efficiency reasons, 
// and the const modifier ensures the value of an argument will
// not be changed.

void myfunctionConst(const std::string& byconstreference)
{
	std::cout << "Arguments passed by const reference: " <<
	byconstreference;
}

// Function Overloading
void myprint(char param);
void myprint(int param);
void myprint(double param);

int main() {
	
	myfunction(123);

	int x = 123;
	// When passing by reference, we need to pass the variable 
	// itself; we can’t pass in a literal representing a value.
	// Passing by reference is best avoided.
	myfunctionRef(x);
}