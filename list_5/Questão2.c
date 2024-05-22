#include <stdio.h>

int main (){
    int m[2][2], i,j;

    
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            printf("Digite um numero[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
        
    }
    printf("\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
           printf("\nElementos da minha matriz: %i", m[i][j]);
        }
    }
}