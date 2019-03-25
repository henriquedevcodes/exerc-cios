/***************************************************************************************************  
   Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos
****************************************************************************************************/

#include <iostream>

int main() {
	int n;
	int i = 0;
	int total = 0;

	do {
		std::cout << "Entre com um numero inteiro positivo: ";
		std::cin >> n;

		while (i <= n) {
			total += i;
			i++;
		}		
	} while (n < 0);	

	std::cout << "Valor total da soma dos primeiros n inteiros positivos: " << total << std::endl;

	return 0;
}
