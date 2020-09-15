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

// a destructor is a member function that gets invoked when an
// object is destroyed.


// Destructor takes no parameters, and there is one destructor per class.

class MyClass
{
public:
	MyClass() {} // constructor
	~MyClass() {
		std::cout << "Destructor invoked.";
	} // destructor
};

// Resource Acquisition is Initialization.
// https://dev.to/dwd/resource-acquisition-is-initialization-120h
// https://medium.com/@nonuruzun/raii-resource-acquisition-is-initialization-7468f0f50501

int main() {
	MyClass o;
	return EXIT_SUCCESS;
} // Destructor invoked here, when o gets out of scope

// Destructors are called when an object goes out of scope or 
// when a pointer to an object is deleted.