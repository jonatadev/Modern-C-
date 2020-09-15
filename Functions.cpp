#include <iostream>
#include <string>


// In function declaration only, we can omit the parameter names, but we need to
// specify their types.

int mysum(int, int);

int mysquarednumber(int x); // function declaration

int main() {
	int myresult = mysquarednumber(2); // a call to the function
}

// A function definition has everything a function
// declaration has, plus the body of a function.

// function definition
int mysquarednumber(int x) {
	return x * x;
}

