#include <iostream>

int main() {
	// Another concept is a const-reference, which is a read-only alias to some object.

	int x = 123;
	const int& y = x; // const reference
	x = 456;
	// both x and y now hold the value of 456
}
