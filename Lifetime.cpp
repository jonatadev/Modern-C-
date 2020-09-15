#include <iostream>
#include <string>

int main() {
	// The lifetime of an object is the time an object spends in memory. 
	
	// Automatic Storage Duration - STACK MEMORY
	// This is also called a stack memory; objects are allocated on the stack.In this
	// case, the object’s lifetime is determined by its scope.All local objects have this storage
	// duration

	// Dynamic Storage Memory - HEAP MEMORY
	// The dynamic storage duration is a duration where memory for 
	// an object is manually allocatedand manually deallocated.

	// We do it through operator new and smart pointers.
	// In modern C++, we should prefer the smart pointer 
	// facilities to operator new.

	// The operator new allocates space for an object.
	// The object is allocated on the freestore, often 
	// called heap or heap memory.The allocated memory
	// must be deallocated using operator delete.

	int* p = new int;
	*p = 123;
	std::cout << "The pointed-to value is: " << *p;
	delete p;

	// Pointers can be dereferenced by a
	// subscript operator []

	// Remember: prefer smart pointers to operator new.
	int* p = new int[3];
	//  Our pointer p now points at the first element in the array.
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	std::cout << "The values are: " << p[0] << ' ' << p[1] << ' ' << p[2];
	delete[] p;
	
	int* p = new int{ 123 };
	std::cout << "The value with a dynamic storage duration is: " << *p;
	delete p;

	// https://docs.microsoft.com/pt-br/cpp/cpp/smart-pointers-modern-cpp?view=vs-2019
}