#include <iostream>
#include <string>


// Local Scope
void myfunction()
{
	int x = 123; // Here begins the x's scope
} // and here it ends


int main() {
	// Block Scope
	int x = 123; // first x' scope begins here
}