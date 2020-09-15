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

class MyClass
{
private:
	int x;
	int* p;
public:
	MyClass(int xx, int pp)
		: x{ xx }, p{ new int{pp} }
	{ }

	MyClass(const MyClass& rhs)
		: x{ rhs.x }, p{ new int {*rhs.p} }
	{
		std::cout << "User defined copy constructor invoked.";
	}

};

int main() {

	MyClass o1{ 1, 2 };
	MyClass o2 = o1; // user defined copy constructor invoked

	return EXIT_SUCCESS;
}