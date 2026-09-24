#include <stdio.h>

int main(void) {
	int opcao;
	int totalCentavos = 0;

	do {
		printf("\n===== COFRINHO DIGITAL =====\n");
		printf("1 - Adicionar moeda de R$ 0,50\n");
		printf("2 - Adicionar moeda de R$ 1,00\n");
		printf("3 - Adicionar moeda de R$ 2,00\n");
		printf("4 - Parar e mostrar o total\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);

		switch (opcao) {
			case 1:
				totalCentavos += 50;
				printf("Moeda de R$ 0,50 adicionada.\n");
				break;
			case 2:
				totalCentavos += 100;
				printf("Moeda de R$ 1,00 adicionada.\n");
				break;
			case 3:
				totalCentavos += 200;
				printf("Moeda de R$ 2,00 adicionada.\n");
				break;
			case 4:
				printf("Cofrinho encerrado.\n");
				break;
			default:
				printf("Opcao invalida.\n");
		}
	} while (opcao != 4);

	printf("Total acumulado: R$ %.2f\n", totalCentavos / 100.0);

	return 0;
}
