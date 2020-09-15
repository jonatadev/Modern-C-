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

// https://www.modernescpp.com/index.php/c-core-guidelines-constructors


// If a user does not provide a move constructor, the compiler provides an implicitly
// generated default move constructor.

class MyClass
{
public:
	//       move assignment operator. 
	MyClass& operator=(MyClass&& otherobject)
	{
		// implement the copy logic here
		return *this;
	}
};

int main() {

	

	return EXIT_SUCCESS;
}

/*
Move assignment operator is invoked when we declare an object and then
try to assign an rvalue reference to it.

*/