/***************************************************************************************************  
    Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura
****************************************************************************************************/

#include <iostream>
#define MAX 10

int main() {
	int values[MAX];

	for (int i{ 0 }; i < MAX; i++) {
		std::cout << "imput number: ";
		std::cin >> values[i];
	}

	for (int i{ MAX - 1 }; i >= 0; i--) {
		std::cout << values[i] << std::endl;
	}

	return 0;
}
