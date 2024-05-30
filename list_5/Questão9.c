#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int ma[5][5], i, j, num;
    int par, impar;
    int menor = 50, maior = 0;

    srand(time(0));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            num = rand() %51;
            ma[i][j] = num;

            if(ma[i][j] % 2 == 0){
                par++;
            } else {
                impar++;
            }

            if (ma[i][j] > maior){
                maior = ma[i][j];
            }
            if (ma[i][j] < menor){
                menor = ma[i][j];
            }
            
            
        }
    }
    printf("Matriz 5x5\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++){
            printf("%3d ", ma[i][j]);
        }
        printf("\n");
    }

    printf("\nQuantidade de numeros pares: %d", par);
    printf("\nQuantidade de numeros impar: %d", impar);
    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);


}