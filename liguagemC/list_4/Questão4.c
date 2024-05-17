#include <stdio.h>

int main() {
    int vetor[10];
    int i, num;

    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) { 
            vetor[i] = 1; 
        } else {
            vetor[i] = 0; 
        }
    }

    printf("\nO vetor resultante é:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
