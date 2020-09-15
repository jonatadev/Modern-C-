#include <iostream>
#include <string>

//Preferred way of accepting a string from the standard input is via the std::getline
//function which takes std::cinand our string as parameters
int main() {

	std::string s;
	std::cout << "Please enter a string: ";

	std::getline(std::cin, s);
	std::cout << "You entered: " << s;

	//A string has a member function.c_str() which returns a pointer to its first element.
	std::string s = "Hello World.";
	std::cout << s.c_str();

	std::string s = "This is a Hello World string.";
	std::string stringtofind = "Hello";
	std::string::size_type found = s.find(stringtofind);
	if (found != std::string::npos)
	{
		std::cout << "Substring found at position: " << found;
	}
	else
	{
		std::cout << "The substring is not found.";
	}
}

//We use the std::getline because our string can contain white spaces.And if we
//used the std::cin function alone, it would accept only a part of the string