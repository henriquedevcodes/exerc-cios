/***************************************************************************************************  
   Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares
****************************************************************************************************/

#include <iostream>

int main() {
	int n;
	int i = 0;
	int impar = 1;

	do {
		std::cout << "Entre com um numero n: ";
		std::cin >> n;

		std::cout << "Primeiros " << n << " numeros naturais impares: ";

		while (i < n) {			
			std::cout << impar << " ";
			impar = impar + 2;
			i++;
		}
	} while (n < 0);

	return 0;
