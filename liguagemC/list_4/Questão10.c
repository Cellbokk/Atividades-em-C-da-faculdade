#include <stdio.h>

int main() {
    int vetor[5];
    int i, j, maxIndex, temp;

    // Recebe os 5 números do usuário
    printf("Digite 5 números:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    // Ordena o vetor em ordem decrescente usando Selection Sort
    for (i = 0; i < 5 - 1; i++) {
        maxIndex = i;
        for (j = i + 1; j < 5; j++) {
            if (vetor[j] > vetor[maxIndex]) {
                maxIndex = j;
            }
        }
        // Troca o elemento atual com o maior elemento encontrado
        temp = vetor[i];
        vetor[i] = vetor[maxIndex];
        vetor[maxIndex] = temp;
    }

    // Imprime o vetor ordenado em ordem decrescente
    printf("Vetor ordenado em ordem decrescente:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
