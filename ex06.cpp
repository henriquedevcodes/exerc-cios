/***************************************************************************************************  
   Dados o número n de alunos de uma turma de Introdução aos Autômatos a Pilha (MAC 414) e 
   suas notas da primeira prova, determinar a maior e a menor nota obtidas por essa 
   turma (Nota máxima = 100 e nota mínima = 0)
****************************************************************************************************/

#include <iostream>

int main() {
	float notas[] {5.75, 7.0, 9.0, 8.8, 7.7, 5.2, 9.8, 7.9, 8.1, 5.7, 9.9, 10.0};
	float maior = notas[0];
	float menor = notas[0];

	for (int i {1}; i < std::size(notas); i++) {
		if (menor < notas[i]) {
			menor = notas[i];
		}
		if (maior > notas[i]) {
			maior = notas[i];
		}
	}	

	std::cout << "Maior nota: " << maior << " menor nota: " << menor << std::endl;

	return 0;
}
