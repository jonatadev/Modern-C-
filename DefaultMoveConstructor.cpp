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

class MyClass { 

private:
	int x;
	std::string s;
public:

	MyClass(int xx, std::string ss) // user provided constructor
		: x{ xx }, s{ ss }
	{}
	MyClass(MyClass&& rhs) // move constructor
		:
		x{ std::move(rhs.x) }, s{ std::move(rhs.s) }
	{
		std::cout << "Move constructor invoked." << '\n';
	}
};

int main() {

	MyClass o1{ 1, "Some string value" };
	MyClass o2 = std::move(o1);

	return EXIT_SUCCESS;
}

/*


*/