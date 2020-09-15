#include <iostream>

int main() {

	//in modern C++, we should prefer
    //the std::arrayand std::vector containers to raw arrays.
	int arr[5] = { 10, 20, 30, 40, 50 };
	arr[4] = 500; // change the value of the last array element

	//Each object in memory has its typeand an address
	int* p;

	int x = 123;
	int* p = &x;

	char c = 'a';
	char* p = &c;
	// To initialize a pointer that does not point to any object we can use the nullptr literal
	int *sum = nullptr;

	// Pointers are variables / objects, just like any other type of object.Their value is
	// the address of an object, a memory location where the object is stored.To access a
	// value stored in an object pointed to by a pointer, we need to dereference a pointer.

	// Dereferencing is done by prepending a pointer(variable) name with a dereferencing
    // operator *:

	char cc = 'a';
	char* pp = &cc;
	char dd = *p;
	std::cout << "The value of the dereferenced pointer is: " << *p;

}