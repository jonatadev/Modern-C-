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


// When we initialize an object with another object of the same class, we invoke a copy
// constructor.If we do not supply our copy constructor, the compiler generates a default
// copy constructor that performs the so - called shallow copy.


class MyClass
{
private:
	int x, y;
public:
	MyClass(int xx, int yy) : x{ xx }, y{ yy }
	{ }
	// We can provide our own copy constructor. 
	// user defined copy constructor
	MyClass(const MyClass& rhs)
		: x{ rhs.x }, y{ rhs.y } // initialize members with other object's members
	{
		std::cout << "User defined copy constructor invoked.";
	}
};

int main() {

	MyClass o1{ 1, 2 };
	//MyClass o2 = o1; // default copy constructor invoked
	MyClass o2 = o1; // user defined copy constructor invoked

	return EXIT_SUCCESS;
}