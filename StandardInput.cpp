#include<iostream>
// The std::cin >> x; statement means : read from
// a standard input into a x variable.
int main() {
	std::cout << "Please enter a number and press enter: ";
	int x = 0;
	std::cin >> x;
	std::cout << "You entered: " << x;

	int arr[5] = { 10, 20, 30, 40, 50 };
	arr[4] = 500; // change the value of the last array element

}