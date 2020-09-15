#include <iostream>

int main() {
	// C++ standard library offers a compound type called string
	// or rather std::string as it is part of the std namespace.

	std::string s{ "Hello World!" };
	s += "From Brazil!";
	std::cout << s;

	// Type string is the so - called class - template.
	// It is implemented using templates, which
    // we will discuss later on.

	std::string s = "Hello World.";
	char c1 = s[0]; // 'H'
	char c2 = s.at(0); // 'H';
	char c3 = s[6]; // 'W'
	char c4 = s.at(6); // 'W';
	std::cout << "First character: " << c1 << ", sixth character: " << c3;

	std::string s1 = "Hello";
	if (s1 == "Hello")
	{
		std::cout << "The strings are equal.";
	}
	else
	{
		std::cout << "The strings are not equal.";
	}




}