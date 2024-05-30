#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int linhas = 4;
    int colunas = 4;
    int matriz[4][4];
    int somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;
    int somaLinha[4] = {0}, somaColuna[4] = {0};
    int i, j;

    srand(time(0)); 

    
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz[i][j] = rand() % 10 + 1; 
        }
    }

    
    printf("Matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    
    for (i = 0; i < linhas; i++) {
        somaDiagonalPrincipal += matriz[i][i];
        somaDiagonalSecundaria += matriz[i][colunas - i - 1];
    }

    
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            somaLinha[i] += matriz[i][j];
            somaColuna[j] += matriz[i][j];
        }
    }

    
    int ehQuadradoMagico = 1;
    for (i = 0; i < linhas; i++) {
        if (somaLinha[i] != somaDiagonalPrincipal || somaColuna[i] != somaDiagonalPrincipal) {
            ehQuadradoMagico = 0; 
            break;
        }
    }

    if (somaDiagonalPrincipal != somaDiagonalSecundaria) {
        ehQuadradoMagico = 0; 
    }

    if (ehQuadradoMagico) {
        printf("A matriz forma um Quadrado Mágico.\n");
    } else {
        printf("A matriz não forma um Quadrado Mágico.\n");
    }

    return 0;
}
