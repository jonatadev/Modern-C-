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

// A better, more efficient way to initialize an object of a class
// is to use the constructor’s member initializer list in the 
// definition of the constructor.


// This is the preferred way of initializing class data members.

class MyClass
{
public:
	int x, y;
	// https://en.cppreference.com/w/cpp/language/constructor
	MyClass(int xx, int yy) 
		   : x{ xx }, y{ yy } // member initializer list
	{

	}
	
};

int main() {

	MyClass o{ 1, 2 }; // invoke a user-defined constructor
	std::cout << o.x << ' ' << o.y;
	return EXIT_SUCCESS;
}