#include <stdio.h>

int main() {
    int vetor[10], i, j, temp;
  
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
   
    printf("Vetor original:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
   
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    
    printf("Vetor ordenado em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}