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
#include <concepts>

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
// Ctrl + d = duplicate
// Ctrl + k + Ctrl + f = format selection
class Person
{
private:
	std::string name;
// The const modifier in member functions promises the functions will not modify the data
//	membersand are easier for compiler to optimize the code.

public:
	explicit Person(const std::string& aname)
		: name{ aname }
	{}
	std::string getname() const { return name; }
};

class Student : public Person
{
private:
	int semester;
public:
	Student(const std::string& aname, int asemester)
		: Person::Person{ aname }, semester{ asemester }
	{}
	int getsemester() const { return semester; }
};

int main(int argc, char *argv[]) {
	Person person{ "John Doe." };
	std::cout << person.getname() << '\n';
	Student student{ "Jane Doe", 2 };
	std::cout << student.getname() << '\n';
	std::cout << "Semester is: " << student.getsemester() << '\n';

	return EXIT_SUCCESS;
}