// https://www.cppandfriends.com/
// https://stackoverflow.com/cv/lefticus
// https://articles.emptycrate.com/index.html

#include <cstdio>
#include <iostream>

int main() {
	// :: is the scope resolution operator.
	std::cout << "Hello World!";
	bool b = true;

	// We can also use braces {} for initialization.
	bool c{false};

	// All local variables should be initialized.

	char c = 'a';
	std::cout << "The value of variable c is: " << c;

	std::cout << "The size of type char is: " 
		      << sizeof(char)
		      << " byte(s)";

	double d = 3.14;
	std::cout << "The value of d is: " << d;
}

// C++ is a language like no
// other, surprising in its complexity, yet wonderfully 
// sleekand elegant in so many ways.