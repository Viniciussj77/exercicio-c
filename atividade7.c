#include <stdio.h>

int main(void) {
    float consumo[5];
    float soma = 0.0f;
    float media;

    for (int i = 0; i < 5; i++) {
        printf("Digite o consumo do morador %d (em m3): ", i + 1);
        scanf("%f", &consumo[i]);
        soma += consumo[i];
    }

    printf("\nClassificacao dos consumos:\n");
    for (int i = 0; i < 5; i++) {
        if (consumo[i] <= 20.0f) {
            printf("Morador %d: dentro da media (%.2f m3).\n", i + 1, consumo[i]);
        } else {
            printf("Morador %d: acima da media (%.2f m3).\n", i + 1, consumo[i]);
        }
    }

    media = soma / 5.0f;
    printf("\nConsumo medio geral: %.2f m3.\n", media);

    return 0;
}
