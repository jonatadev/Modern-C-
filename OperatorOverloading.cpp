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

// Objects of classes can be used in expression as operands. 



class MyClass
{
private:
	int x;
	double d;
public:
	MyClass()
		: x{ 0 }, d{ 0.0 }
	{ }

	// Operator Overloading
	// prefix operator ++
	MyClass& operator++()
	{
		++x;
		++d;
		std::cout << "Prefix operator ++ invoked." << '\n';
		return *this;
	}
};


int main() {

	MyClass myobject;
	// prefix operator
	++myobject;
	// the same as:
	myobject.operator++();

	return EXIT_SUCCESS;
}

// When we need to perform arithmetic, logic, and other operations on our objects of
// a class, we need to overload the appropriate operators.There are rulesand signatures
// for overloading each operator.

// https://en.cppreference.com/w/cpp/language/operators