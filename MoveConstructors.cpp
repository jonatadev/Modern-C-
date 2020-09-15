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

class MyClass { };

int main() { 
	MyClass o1;
	MyClass o2 = std::move(o1);
	std::cout << "Move constructor invoked.";
	// or MyClass o2{std::move(o1)};

	return EXIT_SUCCESS;
}

/*

we can also move the data from one object to the other. We call
it a move semantics. Move semantics is achieved through a move constructor 
and move assignment operator.

Move constructor accepts something called rvalue reference as an argument.
*/