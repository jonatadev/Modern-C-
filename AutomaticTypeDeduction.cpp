#include <iostream>
#include <string>

int main() {
	// We can automatically deduce the type of an object using the auto specifier.The auto
   //  specifier deduces the type of an object based on the object’s initializer type.

	//Automatic Type Deduction
	auto c = 'a'; // char type
	auto x = 123; // int type

	auto d = 123.456 / 789.10; // double

	// We can use auto as part of the reference type.
	int x = 123;
	auto& y = x; // y is of int& type

	// We use the auto specifier when the type (name) is hard to deduce manually or
	// cumbersome to type due to the length.

	const auto x = 123; // x is of const int type








}