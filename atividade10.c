#include <stdio.h>

int main(void) {
	int passosHora;
	int totalPassos = 0;
	int horas = 0;

	while (totalPassos < 10000) {
		printf("Digite a quantidade de passos da hora %d: ", horas + 1);
		scanf("%d", &passosHora);

		if (passosHora <= 0) {
			printf("Digite uma quantidade de passos maior que zero.\n");
			continue;
		}

		totalPassos += passosHora;
		horas++;
	}

	printf("\nMeta atingida com %d passos.\n", totalPassos);
	printf("Foram necessarias %d horas.\n", horas);

	return 0;
}
