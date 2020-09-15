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

// https://code.visualstudio.com/docs/getstarted/keybindings
// Alt + shift + l = full screen
// Ctrl + shift + l = remove line

class MyBaseClass
{
public: // Observa palavra virtual
	virtual void dowork()
	{
		std::cout << "Hello from a base class." << '\n';
	}
};

class MyDerivedClass : public MyBaseClass
{
public:
	void dowork()
	{
		std::cout << "Hello from a derived class." << '\n';
	}
};

int main() {

	MyBaseClass* o = new MyDerivedClass;
	o->dowork();
	delete o;

	return EXIT_SUCCESS;
}