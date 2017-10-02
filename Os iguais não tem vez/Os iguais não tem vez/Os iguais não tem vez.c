#include <stdio.h>

void ordenando_vetor(int vetor[], int tamanho_vetor);

int main() {
	int quantidade_de_numeros = 0, i = 0;
	int numeros_digitados[51];

	printf("Quantos numeros serao digitados? ");
	scanf_s("%d", &quantidade_de_numeros);
	printf("Agora digite os numeros: ");

	//LENDO OS NUMEROS
	for (i = 0; i < quantidade_de_numeros; i++) {
		scanf_s("%d", &numeros_digitados[i]);
	}
	//ORDENANDO O VETOR
	ordenando_vetor(numeros_digitados[51], quantidade_de_numeros);

	//IMPRIMINDO OS NUMEROS
	for (i = 0; i < quantidade_de_numeros; i++) {
		printf("%d ", numeros_digitados[i]);
	}
	system("pause");
	return 0;
}
//ORDENANDO OS NUMEROS
void ordenando_vetor(int vetor[], int tamanho_vetor) {
	int i, j, ordena;
	for (i = 0; i < tamanho_vetor - 1; i++) {
		for (j = 0; j < tamanho_vetor - 1; j++) {
			if (vetor[i] < vetor[j]) {
				ordena = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = ordena;
			}
		}
	}
}