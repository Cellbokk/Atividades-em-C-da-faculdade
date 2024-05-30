#include <stdio.h>

int main (){
    int ma[4][4], i, j;

    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++)
        {
            printf("preencha as matrizes[%d][%d]", i, j);
            scanf("%d", &ma[i][j]);
        }
    }
    printf("\nMatriz 3x3:\n");
    for (i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++){
            printf("%3d ", ma[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    for (i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++){
            if(ma[i][j] % 2 != 0){
                printf("%d ", ma[i][j]);
            }
        } 
    }
}