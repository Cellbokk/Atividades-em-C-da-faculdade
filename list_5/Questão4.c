#include <stdio.h>

int main (){
    int Ma[3][3], i, j, soma_diagonal;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++)
        {
            printf("Preencha a Matriz [%d][%d]:", i, j);
            scanf("%d", &Ma[i][j]);
        }
        
    }
    printf("\nMatriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", Ma[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal principal:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", Ma[i][i]);
    }

    for (i = 0; i < 3; i++) {
        soma_diagonal += Ma[i][i];
    }

    printf("\n\nSoma da diagonal principal: %d\n", soma_diagonal);
}