#include <stdio.h>

int main() {
    int vetor[5], maior, menor, i;
    float media, soma = 0.0;

    printf("Preencha o vetor!!\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 0; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }

        soma += vetor[i];
    }

    media = soma / 5.0;

    printf("O maior número dos vetores é: %d\n", maior);
    printf("O menor número dos vetores é: %d\n", menor);
    printf("A média dos vetores é: %.2f\n", media);

    return 0;
}