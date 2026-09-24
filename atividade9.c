#include <stdio.h>

int main(void) {
	float nota;
	float soma = 0.0f;
	float media;

	for (int i = 0; i < 10; i++) {
		do {
			printf("Digite a nota do cliente %d (de 0 a 10): ", i + 1);
			scanf("%f", &nota);

			if (nota < 0.0f || nota > 10.0f) {
				printf("Nota invalida. Digite um valor entre 0 e 10.\n");
			}
		} while (nota < 0.0f || nota > 10.0f);

		soma += nota;
	}

	media = soma / 10.0f;
	printf("\nNota media geral: %.2f\n", media);

	if (media < 7.0f) {
		printf("ALERTA: a nota media do atendimento esta abaixo de 7.\n");
	}

	return 0;
}
