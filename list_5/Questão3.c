#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    // Solicita ao usuário que preencha a matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprime a matriz
    printf("\nMatriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprime a diagonal principal
    printf("\nDiagonal principal:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }

    return 0;
}