#include <stdio.h>

int main() {
	int numero1;
	int numero2;
	int maior = 0;
	int menor = 0;
	int cicloAnterior = 0;
	int cicloAtual;
	int resultado;
	printf("Digite dois numeros: \n");
	scanf_s("%d %d", &numero1, &numero2);
	if (numero1 > numero2) {
		maior = numero1;
		menor = numero2;
	}
	else {
		maior = numero2;
		menor = numero1;
	}
	while (menor <= maior) {
		cicloAtual = 1;
		resultado = 0;
		while (resultado != 1)
		{
			if (menor % 2 == 0) {
				resultado = menor / 2;
			} else {
				resultado = (menor * 3) + 1;
			}
			cicloAtual++;
		}
		if (cicloAnterior < cicloAtual) {
			cicloAnterior = cicloAtual;
		}
		menor++;
	}
	printf("%d %d %d", numero1, numero2, cicloAnterior);
	system("pause");
	return 0;
}