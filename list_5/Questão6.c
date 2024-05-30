#include <stdio.h>

int main (){
    int ma[4][4], i, j, Multi3;
    int Multi1 = 1;
    int Multi2 = 1;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++)
        {
            printf("preencha as matrizes[%d][%d]:", i, j);
            scanf("%d", &ma[i][j]);
        }
    }
    printf("\nMatriz 3x3\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("%3d ", ma[i][j]);
        }
        printf("\n");
    }
    

    printf("\nPrimeira diagonal:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", ma[i][i]);
    }
    printf("\n");

    printf("\nSegunda diagonal:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", ma[i][2 - i]);
    }

    printf("\n");

    for (i = 0; i < 3; i++){
        Multi1 *= ma[i][i];
    }

    for (i = 0; i < 3; i++){
        Multi2 *= ma[i][2 - i];
    }
    
    Multi3 = Multi1 * Multi2;

    printf("\nA multiplicação das diagonais da matrizes e:%d ", Multi3);
}