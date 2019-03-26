/**************************************************************************************************
	Write a program in C++ to print the sum of two numbers
**************************************************************************************************/


#include <iostream>

int main() {
	int x;
	int y;

	std::cout << "Enter x value: ";
	std::cin >> x;
	std::cout << "Enter y value: ";
	std::cin >> y;

	std::cout << "The sum of " << x << " and " << y << " is : " << x + y;

	return 0;
}
