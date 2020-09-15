// https://en.cppreference.com/w/cpp/header

#include <iostream>
#include <string>
#include <cstdlib>

// C++ 14
#include <shared_mutex>

// C++ 17
#include <optional>
#include <any>
#include <execution>
#include <variant>
#include <filesystem>
#include <memory_resource>
#include <charconv>

// C++ 20

#include <span>
#include <ranges>
#include <concepts>
#include <bit>
#include <compare>
#include <version>
#include <numbers>
//#include <source_location>
//#include <format>
//#include <barrier>
//#include <latch>
//#include <stop_token>
//#include <syncstream>
//#include <contract> 
//#include <coroutine>

// We defined a class called MyClass
class MyClass {

	// Default visibility/access specifier for a class is private
	// if none of the access specifiers is present :
	// member fields
public:
	char c;
	// There are two ways to define this member function

	// a member function 
	void dosomething()
	{
		std::cout << "Hello World from a class.";
	}
};

// The second one is to define it outside the class

void MyClass::dosomething()
{
	std::cout << "Hello World from a class.";
}

int main() {

	//  Then we created an object o of type MyClass
	MyClass o;
	o.c = { 'A' };
	o.dosomething();

	return EXIT_SUCCESS;
}