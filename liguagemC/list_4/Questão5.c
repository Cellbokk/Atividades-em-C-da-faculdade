#include <stdio.h>

int main() {
    int vetor[5];
    int i, soma = 0;

    printf("Digite 5 números:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

  
    printf("\nValores do vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }


    float media = (float)soma / 5;
    printf("\nMédia aritmética: %.2f\n", media);

    return 0;
}