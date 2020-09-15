// https://en.cppreference.com/w/cpp/header
// https://devblogs.microsoft.com/cppblog/new-safety-rules-in-c-core-check/

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

/*
Derived class and objects of a derived class can access public
members of a base class.
*/

class Person
{
public:
	char c;
	int x;

// The protected access specifier allows access to the base classand derived class, 
// but not to objects.
protected:
	bool yes;
	int sum;
};

class Pedro : public Person
{
public:
	double d;
};
	// c and x also accessible here

int main() {

	Pedro pedro;
	pedro.c = 'a';
	pedro.x = 123;
	pedro.yes; // NOT accessible here - Protected member

	return EXIT_SUCCESS;
}