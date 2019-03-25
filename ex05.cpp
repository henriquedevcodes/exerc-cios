/***************************************************************************************************  
   Uma loja de discos anota diariamente durante o mês de março a quantidade de discos 
   vendidos. Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade 
   de discos vendida nesse dia.
****************************************************************************************************/

#include <iostream>

int main() {
	float notas[31] {5, 4, 8, 4, 6, 8, 7, 4, 5, 7, 8, 9, 8, 4, 4, 5, 1, 15, 4, 8, 4, 16, 8, 7, 4, 5, 7, 8, 9, 8, 19};
	float maior = 0;
	int dia;

	for (int i {0}; i < std::size(notas); i++) {
		if (notas[i] > maior) {
			maior = notas[i];
			dia = i + 1;
		}
	}	

	std::cout << "Dia: " << dia << " vendeu " << maior << " unidades" << std::endl;
	
	return 0;
}
