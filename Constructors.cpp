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
public:
	int x, y;
	MyClass(int xx, int yy)
	{
		x = xx;
		y = yy;
	}
};

int main() {
	//MyClass o; // invoke a default constructor

	MyClass o{ 1, 2 }; // invoke a user-provided constructor
	std::cout << "User-provided constructor invoked." << '\n';
	std::cout << o.x << ' ' << o.y;

	return EXIT_SUCCESS;
}