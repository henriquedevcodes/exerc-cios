/**************************************************************************************************
	Write a C++ program to find the largest element of a given array of integers
**************************************************************************************************/

#include <iostream>

int main() {
	int numbers[] {0, 9, 2, 4, 6, 8, 1, 5};
	int largest = 0;

	for (int i{ 0 }; i < std::size(numbers); i++) {
		if (largest < numbers[i]) {
			largest = numbers[i];
		}
	}

	std::cout << "Largest: " << largest;

	return 0;
}
